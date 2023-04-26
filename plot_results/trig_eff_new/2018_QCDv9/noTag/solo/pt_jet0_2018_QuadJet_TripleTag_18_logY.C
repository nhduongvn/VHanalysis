#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2018_QuadJet_TripleTag_18_logY()
{
//=========Macro generated from canvas: pt_jet0_2018_QuadJet_TripleTag_18/pt_jet0_2018_QuadJet_TripleTag_18
//=========  (Tue Apr 25 23:01:40 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2018_QuadJet_TripleTag_18 = new TCanvas("pt_jet0_2018_QuadJet_TripleTag_18", "pt_jet0_2018_QuadJet_TripleTag_18",0,0,600,600);
   pt_jet0_2018_QuadJet_TripleTag_18->SetHighLightColor(2);
   pt_jet0_2018_QuadJet_TripleTag_18->Range(-100,-0.4785944,566.6667,4.307349);
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
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(9,443);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(10,1125);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(11,1925);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(12,2575);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(13,3135);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(14,3326);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(15,3558);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(16,3472);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(17,3337);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(18,3065);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(19,2879);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(20,2588);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(21,2248);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(22,2051);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(23,1740);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(24,1662);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(25,1376);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(26,1240);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(27,1167);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(28,1040);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(29,918);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(30,782);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(31,793);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(32,664);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(33,555);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(34,504);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(35,470);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(36,448);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(37,357);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(38,336);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(39,323);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(40,300);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(41,258);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(42,241);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(43,216);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(44,212);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(45,178);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(46,160);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(47,159);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(48,154);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(49,122);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(50,122);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(51,1207);
   _QuadJet_TripleTag_pt_jet0__2->SetEntries(53575);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 53575  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  200.9");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  82.24");
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
