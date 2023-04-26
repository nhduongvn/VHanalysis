#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2018_QuadJet_noTag_18_ref_logY()
{
//=========Macro generated from canvas: pt_jet1_2018_QuadJet_noTag_18_ref/pt_jet1_2018_QuadJet_noTag_18_ref
//=========  (Wed Apr 26 16:41:56 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2018_QuadJet_noTag_18_ref = new TCanvas("pt_jet1_2018_QuadJet_noTag_18_ref", "pt_jet1_2018_QuadJet_noTag_18_ref",0,0,600,600);
   pt_jet1_2018_QuadJet_noTag_18_ref->SetHighLightColor(2);
   pt_jet1_2018_QuadJet_noTag_18_ref->Range(-100,1.643601,566.6667,5.757549);
   pt_jet1_2018_QuadJet_noTag_18_ref->SetFillColor(0);
   pt_jet1_2018_QuadJet_noTag_18_ref->SetBorderMode(0);
   pt_jet1_2018_QuadJet_noTag_18_ref->SetBorderSize(2);
   pt_jet1_2018_QuadJet_noTag_18_ref->SetLogy();
   pt_jet1_2018_QuadJet_noTag_18_ref->SetLeftMargin(0.15);
   pt_jet1_2018_QuadJet_noTag_18_ref->SetFrameBorderMode(0);
   pt_jet1_2018_QuadJet_noTag_18_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_pt_jet1_ref__12 = new TH1D("_QuadJet_noTag_pt_jet1_ref__12","",50,0,500);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(5,3441);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(6,52968);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(7,102260);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(8,117113);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(9,110957);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(10,96180);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(11,80524);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(12,66292);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(13,53235);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(14,43320);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(15,35135);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(16,28705);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(17,23039);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(18,19199);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(19,15805);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(20,12809);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(21,10702);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(22,8888);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(23,7370);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(24,6225);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(25,5253);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(26,4423);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(27,3792);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(28,3255);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(29,2728);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(30,2290);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(31,1983);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(32,1742);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(33,1611);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(34,1311);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(35,1167);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(36,1028);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(37,1001);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(38,817);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(39,745);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(40,643);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(41,562);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(42,535);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(43,456);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(44,391);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(45,412);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(46,344);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(47,300);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(48,278);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(49,262);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(50,227);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(51,2502);
   _QuadJet_noTag_pt_jet1_ref__12->SetEntries(934225);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_pt_jet1_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 934225 ");
   ptstats_LaTex = ptstats->AddText("Mean  =  114.3");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  57.21");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_pt_jet1_ref__12->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_pt_jet1_ref__12);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_pt_jet1_ref__12->SetLineColor(ci);
   _QuadJet_noTag_pt_jet1_ref__12->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _QuadJet_noTag_pt_jet1_ref__12->GetXaxis()->SetRange(1,50);
   _QuadJet_noTag_pt_jet1_ref__12->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet1_ref__12->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_pt_jet1_ref__12->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet1_ref__12->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_pt_jet1_ref__12->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet1_ref__12->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet1_ref__12->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet1_ref__12->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_pt_jet1_ref__12->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet1_ref__12->Draw("HIST");
   pt_jet1_2018_QuadJet_noTag_18_ref->Modified();
   pt_jet1_2018_QuadJet_noTag_18_ref->cd();
   pt_jet1_2018_QuadJet_noTag_18_ref->SetSelected(pt_jet1_2018_QuadJet_noTag_18_ref);
}
