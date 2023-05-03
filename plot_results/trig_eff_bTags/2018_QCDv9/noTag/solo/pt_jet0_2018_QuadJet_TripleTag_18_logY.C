#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2018_QuadJet_TripleTag_18_logY()
{
//=========Macro generated from canvas: pt_jet0_2018_QuadJet_TripleTag_18/pt_jet0_2018_QuadJet_TripleTag_18
//=========  (Tue May  2 10:16:00 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2018_QuadJet_TripleTag_18 = new TCanvas("pt_jet0_2018_QuadJet_TripleTag_18", "pt_jet0_2018_QuadJet_TripleTag_18",0,0,600,600);
   pt_jet0_2018_QuadJet_TripleTag_18->SetHighLightColor(2);
   pt_jet0_2018_QuadJet_TripleTag_18->Range(-100,-0.4786859,566.6667,4.308172);
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
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(8,126);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(9,444);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(10,1129);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(11,1930);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(12,2571);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(13,3134);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(14,3332);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(15,3564);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(16,3469);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(17,3345);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(18,3082);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(19,2876);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(20,2587);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(21,2246);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(22,2051);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(23,1742);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(24,1666);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(25,1386);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(26,1237);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(27,1167);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(28,1044);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(29,924);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(30,782);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(31,797);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(32,664);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(33,557);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(34,505);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(35,470);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(36,451);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(37,356);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(38,337);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(39,322);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(40,302);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(41,260);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(42,240);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(43,217);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(44,212);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(45,180);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(46,162);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(47,160);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(48,153);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(49,123);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(50,121);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(51,1206);
   _QuadJet_TripleTag_pt_jet0__2->SetEntries(53648);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 53648  ");
   ptstats_LaTex = ptstats->AddText("Mean  =    201");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  82.27");
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
