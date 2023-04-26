#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2017_QuadJet_noTag_17_ref_logY()
{
//=========Macro generated from canvas: pt_jet1_2017_QuadJet_noTag_17_ref/pt_jet1_2017_QuadJet_noTag_17_ref
//=========  (Tue Apr 25 23:02:17 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2017_QuadJet_noTag_17_ref = new TCanvas("pt_jet1_2017_QuadJet_noTag_17_ref", "pt_jet1_2017_QuadJet_noTag_17_ref",0,0,600,600);
   pt_jet1_2017_QuadJet_noTag_17_ref->SetHighLightColor(2);
   pt_jet1_2017_QuadJet_noTag_17_ref->Range(-100,1.431249,566.6667,5.507252);
   pt_jet1_2017_QuadJet_noTag_17_ref->SetFillColor(0);
   pt_jet1_2017_QuadJet_noTag_17_ref->SetBorderMode(0);
   pt_jet1_2017_QuadJet_noTag_17_ref->SetBorderSize(2);
   pt_jet1_2017_QuadJet_noTag_17_ref->SetLogy();
   pt_jet1_2017_QuadJet_noTag_17_ref->SetLeftMargin(0.15);
   pt_jet1_2017_QuadJet_noTag_17_ref->SetFrameBorderMode(0);
   pt_jet1_2017_QuadJet_noTag_17_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_pt_jet1_ref__12 = new TH1D("_QuadJet_noTag_pt_jet1_ref__12","",50,0,500);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(5,1962);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(6,30235);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(7,58795);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(8,66390);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(9,62884);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(10,54430);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(11,45728);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(12,37744);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(13,30153);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(14,24528);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(15,19986);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(16,16146);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(17,13260);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(18,10759);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(19,8808);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(20,7230);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(21,5928);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(22,5005);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(23,4075);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(24,3394);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(25,2885);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(26,2402);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(27,2140);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(28,1884);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(29,1541);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(30,1248);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(31,1172);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(32,1012);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(33,891);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(34,781);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(35,677);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(36,589);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(37,493);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(38,464);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(39,391);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(40,346);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(41,317);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(42,287);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(43,270);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(44,224);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(45,212);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(46,210);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(47,166);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(48,155);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(49,138);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(50,138);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(51,1451);
   _QuadJet_noTag_pt_jet1_ref__12->SetEntries(529924);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_pt_jet1_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 529924 ");
   ptstats_LaTex = ptstats->AddText("Mean  =    114");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  56.98");
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
   pt_jet1_2017_QuadJet_noTag_17_ref->Modified();
   pt_jet1_2017_QuadJet_noTag_17_ref->cd();
   pt_jet1_2017_QuadJet_noTag_17_ref->SetSelected(pt_jet1_2017_QuadJet_noTag_17_ref);
}
