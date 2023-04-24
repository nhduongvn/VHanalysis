#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2018_QuadJet_noTag_18_ref_logY()
{
//=========Macro generated from canvas: pt_jet1_2018_QuadJet_noTag_18_ref/pt_jet1_2018_QuadJet_noTag_18_ref
//=========  (Tue Apr 18 16:14:00 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2018_QuadJet_noTag_18_ref = new TCanvas("pt_jet1_2018_QuadJet_noTag_18_ref", "pt_jet1_2018_QuadJet_noTag_18_ref",0,0,600,600);
   pt_jet1_2018_QuadJet_noTag_18_ref->SetHighLightColor(2);
   pt_jet1_2018_QuadJet_noTag_18_ref->Range(-100,1.400604,566.6667,5.5237);
   pt_jet1_2018_QuadJet_noTag_18_ref->SetFillColor(0);
   pt_jet1_2018_QuadJet_noTag_18_ref->SetBorderMode(0);
   pt_jet1_2018_QuadJet_noTag_18_ref->SetBorderSize(2);
   pt_jet1_2018_QuadJet_noTag_18_ref->SetLogy();
   pt_jet1_2018_QuadJet_noTag_18_ref->SetLeftMargin(0.15);
   pt_jet1_2018_QuadJet_noTag_18_ref->SetFrameBorderMode(0);
   pt_jet1_2018_QuadJet_noTag_18_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_pt_jet1_ref__48 = new TH1D("_QuadJet_noTag_pt_jet1_ref__48","",50,0,500);
   _QuadJet_noTag_pt_jet1_ref__48->SetBinContent(5,2068);
   _QuadJet_noTag_pt_jet1_ref__48->SetBinContent(6,30829);
   _QuadJet_noTag_pt_jet1_ref__48->SetBinContent(7,59764);
   _QuadJet_noTag_pt_jet1_ref__48->SetBinContent(8,68209);
   _QuadJet_noTag_pt_jet1_ref__48->SetBinContent(9,64526);
   _QuadJet_noTag_pt_jet1_ref__48->SetBinContent(10,55638);
   _QuadJet_noTag_pt_jet1_ref__48->SetBinContent(11,47236);
   _QuadJet_noTag_pt_jet1_ref__48->SetBinContent(12,38302);
   _QuadJet_noTag_pt_jet1_ref__48->SetBinContent(13,30618);
   _QuadJet_noTag_pt_jet1_ref__48->SetBinContent(14,24743);
   _QuadJet_noTag_pt_jet1_ref__48->SetBinContent(15,20112);
   _QuadJet_noTag_pt_jet1_ref__48->SetBinContent(16,16362);
   _QuadJet_noTag_pt_jet1_ref__48->SetBinContent(17,13574);
   _QuadJet_noTag_pt_jet1_ref__48->SetBinContent(18,11020);
   _QuadJet_noTag_pt_jet1_ref__48->SetBinContent(19,9004);
   _QuadJet_noTag_pt_jet1_ref__48->SetBinContent(20,7369);
   _QuadJet_noTag_pt_jet1_ref__48->SetBinContent(21,6114);
   _QuadJet_noTag_pt_jet1_ref__48->SetBinContent(22,5115);
   _QuadJet_noTag_pt_jet1_ref__48->SetBinContent(23,4413);
   _QuadJet_noTag_pt_jet1_ref__48->SetBinContent(24,3479);
   _QuadJet_noTag_pt_jet1_ref__48->SetBinContent(25,2924);
   _QuadJet_noTag_pt_jet1_ref__48->SetBinContent(26,2475);
   _QuadJet_noTag_pt_jet1_ref__48->SetBinContent(27,2152);
   _QuadJet_noTag_pt_jet1_ref__48->SetBinContent(28,1809);
   _QuadJet_noTag_pt_jet1_ref__48->SetBinContent(29,1639);
   _QuadJet_noTag_pt_jet1_ref__48->SetBinContent(30,1423);
   _QuadJet_noTag_pt_jet1_ref__48->SetBinContent(31,1173);
   _QuadJet_noTag_pt_jet1_ref__48->SetBinContent(32,1025);
   _QuadJet_noTag_pt_jet1_ref__48->SetBinContent(33,895);
   _QuadJet_noTag_pt_jet1_ref__48->SetBinContent(34,783);
   _QuadJet_noTag_pt_jet1_ref__48->SetBinContent(35,698);
   _QuadJet_noTag_pt_jet1_ref__48->SetBinContent(36,602);
   _QuadJet_noTag_pt_jet1_ref__48->SetBinContent(37,545);
   _QuadJet_noTag_pt_jet1_ref__48->SetBinContent(38,481);
   _QuadJet_noTag_pt_jet1_ref__48->SetBinContent(39,436);
   _QuadJet_noTag_pt_jet1_ref__48->SetBinContent(40,366);
   _QuadJet_noTag_pt_jet1_ref__48->SetBinContent(41,372);
   _QuadJet_noTag_pt_jet1_ref__48->SetBinContent(42,319);
   _QuadJet_noTag_pt_jet1_ref__48->SetBinContent(43,271);
   _QuadJet_noTag_pt_jet1_ref__48->SetBinContent(44,248);
   _QuadJet_noTag_pt_jet1_ref__48->SetBinContent(45,232);
   _QuadJet_noTag_pt_jet1_ref__48->SetBinContent(46,184);
   _QuadJet_noTag_pt_jet1_ref__48->SetBinContent(47,164);
   _QuadJet_noTag_pt_jet1_ref__48->SetBinContent(48,174);
   _QuadJet_noTag_pt_jet1_ref__48->SetBinContent(49,159);
   _QuadJet_noTag_pt_jet1_ref__48->SetBinContent(50,130);
   _QuadJet_noTag_pt_jet1_ref__48->SetBinContent(51,1517);
   _QuadJet_noTag_pt_jet1_ref__48->SetEntries(541691);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_pt_jet1_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 541691 ");
   ptstats_LaTex = ptstats->AddText("Mean  =  114.1");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  57.27");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_pt_jet1_ref__48->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_pt_jet1_ref__48);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_pt_jet1_ref__48->SetLineColor(ci);
   _QuadJet_noTag_pt_jet1_ref__48->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _QuadJet_noTag_pt_jet1_ref__48->GetXaxis()->SetRange(1,50);
   _QuadJet_noTag_pt_jet1_ref__48->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet1_ref__48->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_pt_jet1_ref__48->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet1_ref__48->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_pt_jet1_ref__48->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet1_ref__48->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet1_ref__48->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet1_ref__48->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_pt_jet1_ref__48->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet1_ref__48->Draw("HIST");
   pt_jet1_2018_QuadJet_noTag_18_ref->Modified();
   pt_jet1_2018_QuadJet_noTag_18_ref->cd();
   pt_jet1_2018_QuadJet_noTag_18_ref->SetSelected(pt_jet1_2018_QuadJet_noTag_18_ref);
}
