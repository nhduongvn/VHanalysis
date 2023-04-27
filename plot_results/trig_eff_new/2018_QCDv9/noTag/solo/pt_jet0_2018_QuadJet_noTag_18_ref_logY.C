#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2018_QuadJet_noTag_18_ref_logY()
{
//=========Macro generated from canvas: pt_jet0_2018_QuadJet_noTag_18_ref/pt_jet0_2018_QuadJet_noTag_18_ref
//=========  (Thu Apr 27 10:18:09 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2018_QuadJet_noTag_18_ref = new TCanvas("pt_jet0_2018_QuadJet_noTag_18_ref", "pt_jet0_2018_QuadJet_noTag_18_ref",0,0,600,600);
   pt_jet0_2018_QuadJet_noTag_18_ref->SetHighLightColor(2);
   pt_jet0_2018_QuadJet_noTag_18_ref->Range(-100,1.301183,566.6667,5.532108);
   pt_jet0_2018_QuadJet_noTag_18_ref->SetFillColor(0);
   pt_jet0_2018_QuadJet_noTag_18_ref->SetBorderMode(0);
   pt_jet0_2018_QuadJet_noTag_18_ref->SetBorderSize(2);
   pt_jet0_2018_QuadJet_noTag_18_ref->SetLogy();
   pt_jet0_2018_QuadJet_noTag_18_ref->SetLeftMargin(0.15);
   pt_jet0_2018_QuadJet_noTag_18_ref->SetFrameBorderMode(0);
   pt_jet0_2018_QuadJet_noTag_18_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_pt_jet0_ref__6 = new TH1D("_QuadJet_noTag_pt_jet0_ref__6","",50,0,500);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(5,106);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(6,6451);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(7,24647);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(8,44822);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(9,59225);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(10,66222);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(11,67837);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(12,65633);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(13,61660);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(14,57377);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(15,52037);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(16,46987);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(17,42518);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(18,37564);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(19,33262);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(20,29349);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(21,26178);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(22,22563);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(23,19962);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(24,17927);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(25,15687);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(26,13896);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(27,12554);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(28,11017);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(29,9802);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(30,8653);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(31,7889);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(32,6932);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(33,6122);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(34,5506);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(35,5092);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(36,4483);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(37,3931);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(38,3615);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(39,3334);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(40,2958);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(41,2649);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(42,2443);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(43,2272);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(44,1999);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(45,1808);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(46,1659);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(47,1507);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(48,1348);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(49,1224);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(50,1138);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(51,12380);
   _QuadJet_noTag_pt_jet0_ref__6->SetEntries(934225);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_pt_jet0_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 934225 ");
   ptstats_LaTex = ptstats->AddText("Mean  =  162.7");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  80.74");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_pt_jet0_ref__6->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_pt_jet0_ref__6);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_pt_jet0_ref__6->SetLineColor(ci);
   _QuadJet_noTag_pt_jet0_ref__6->GetXaxis()->SetTitle("Leading jet p_{T} [GeV]");
   _QuadJet_noTag_pt_jet0_ref__6->GetXaxis()->SetRange(1,50);
   _QuadJet_noTag_pt_jet0_ref__6->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet0_ref__6->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_pt_jet0_ref__6->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet0_ref__6->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_pt_jet0_ref__6->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet0_ref__6->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet0_ref__6->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet0_ref__6->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_pt_jet0_ref__6->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet0_ref__6->Draw("HIST");
   pt_jet0_2018_QuadJet_noTag_18_ref->Modified();
   pt_jet0_2018_QuadJet_noTag_18_ref->cd();
   pt_jet0_2018_QuadJet_noTag_18_ref->SetSelected(pt_jet0_2018_QuadJet_noTag_18_ref);
}
