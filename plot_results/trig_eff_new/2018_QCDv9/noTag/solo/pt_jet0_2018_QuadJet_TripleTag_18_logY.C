#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2018_QuadJet_TripleTag_18_logY()
{
//=========Macro generated from canvas: pt_jet0_2018_QuadJet_TripleTag_18/pt_jet0_2018_QuadJet_TripleTag_18
//=========  (Thu Apr 27 10:18:09 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2018_QuadJet_TripleTag_18 = new TCanvas("pt_jet0_2018_QuadJet_TripleTag_18", "pt_jet0_2018_QuadJet_TripleTag_18",0,0,600,600);
   pt_jet0_2018_QuadJet_TripleTag_18->SetHighLightColor(2);
   pt_jet0_2018_QuadJet_TripleTag_18->Range(-100,-0.4788228,566.6667,4.309405);
   pt_jet0_2018_QuadJet_TripleTag_18->SetFillColor(0);
   pt_jet0_2018_QuadJet_TripleTag_18->SetBorderMode(0);
   pt_jet0_2018_QuadJet_TripleTag_18->SetBorderSize(2);
   pt_jet0_2018_QuadJet_TripleTag_18->SetLogy();
   pt_jet0_2018_QuadJet_TripleTag_18->SetLeftMargin(0.15);
   pt_jet0_2018_QuadJet_TripleTag_18->SetFrameBorderMode(0);
   pt_jet0_2018_QuadJet_TripleTag_18->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_pt_jet0__2 = new TH1D("_QuadJet_TripleTag_pt_jet0__2","",50,0,500);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(6,2);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(7,17);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(8,125);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(9,445);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(10,1131);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(11,1937);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(12,2589);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(13,3153);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(14,3340);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(15,3573);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(16,3487);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(17,3353);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(18,3091);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(19,2898);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(20,2603);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(21,2250);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(22,2057);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(23,1751);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(24,1670);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(25,1384);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(26,1243);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(27,1172);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(28,1045);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(29,928);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(30,785);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(31,796);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(32,671);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(33,555);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(34,503);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(35,473);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(36,450);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(37,360);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(38,335);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(39,322);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(40,302);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(41,260);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(42,240);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(43,218);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(44,213);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(45,181);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(46,162);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(47,160);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(48,154);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(49,122);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(50,124);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(51,1212);
   _QuadJet_TripleTag_pt_jet0__2->SetEntries(53842);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 53842  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  200.9");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  82.25");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_pt_jet0__2->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_pt_jet0__2);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_pt_jet0__2->SetLineColor(ci);
   _QuadJet_TripleTag_pt_jet0__2->GetXaxis()->SetTitle("Leading jet p_{T} [GeV]");
   _QuadJet_TripleTag_pt_jet0__2->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_pt_jet0__2->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet0__2->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_pt_jet0__2->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet0__2->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_pt_jet0__2->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet0__2->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet0__2->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet0__2->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_pt_jet0__2->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet0__2->Draw("HIST");
   pt_jet0_2018_QuadJet_TripleTag_18->Modified();
   pt_jet0_2018_QuadJet_TripleTag_18->cd();
   pt_jet0_2018_QuadJet_TripleTag_18->SetSelected(pt_jet0_2018_QuadJet_TripleTag_18);
}
