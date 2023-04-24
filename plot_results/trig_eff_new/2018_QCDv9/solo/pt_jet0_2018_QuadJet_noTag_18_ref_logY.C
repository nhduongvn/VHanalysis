#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2018_QuadJet_noTag_18_ref_logY()
{
//=========Macro generated from canvas: pt_jet0_2018_QuadJet_noTag_18_ref/pt_jet0_2018_QuadJet_noTag_18_ref
//=========  (Tue Apr 18 16:14:00 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2018_QuadJet_noTag_18_ref = new TCanvas("pt_jet0_2018_QuadJet_noTag_18_ref", "pt_jet0_2018_QuadJet_noTag_18_ref",0,0,600,600);
   pt_jet0_2018_QuadJet_noTag_18_ref->SetHighLightColor(2);
   pt_jet0_2018_QuadJet_noTag_18_ref->Range(-100,1.113423,566.6667,5.293979);
   pt_jet0_2018_QuadJet_noTag_18_ref->SetFillColor(0);
   pt_jet0_2018_QuadJet_noTag_18_ref->SetBorderMode(0);
   pt_jet0_2018_QuadJet_noTag_18_ref->SetBorderSize(2);
   pt_jet0_2018_QuadJet_noTag_18_ref->SetLogy();
   pt_jet0_2018_QuadJet_noTag_18_ref->SetLeftMargin(0.15);
   pt_jet0_2018_QuadJet_noTag_18_ref->SetFrameBorderMode(0);
   pt_jet0_2018_QuadJet_noTag_18_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_pt_jet0_ref__24 = new TH1D("_QuadJet_noTag_pt_jet0_ref__24","",50,0,500);
   _QuadJet_noTag_pt_jet0_ref__24->SetBinContent(5,68);
   _QuadJet_noTag_pt_jet0_ref__24->SetBinContent(6,3708);
   _QuadJet_noTag_pt_jet0_ref__24->SetBinContent(7,14502);
   _QuadJet_noTag_pt_jet0_ref__24->SetBinContent(8,26197);
   _QuadJet_noTag_pt_jet0_ref__24->SetBinContent(9,34360);
   _QuadJet_noTag_pt_jet0_ref__24->SetBinContent(10,38752);
   _QuadJet_noTag_pt_jet0_ref__24->SetBinContent(11,39662);
   _QuadJet_noTag_pt_jet0_ref__24->SetBinContent(12,38710);
   _QuadJet_noTag_pt_jet0_ref__24->SetBinContent(13,36164);
   _QuadJet_noTag_pt_jet0_ref__24->SetBinContent(14,32789);
   _QuadJet_noTag_pt_jet0_ref__24->SetBinContent(15,30434);
   _QuadJet_noTag_pt_jet0_ref__24->SetBinContent(16,27189);
   _QuadJet_noTag_pt_jet0_ref__24->SetBinContent(17,24217);
   _QuadJet_noTag_pt_jet0_ref__24->SetBinContent(18,21774);
   _QuadJet_noTag_pt_jet0_ref__24->SetBinContent(19,19397);
   _QuadJet_noTag_pt_jet0_ref__24->SetBinContent(20,16691);
   _QuadJet_noTag_pt_jet0_ref__24->SetBinContent(21,15136);
   _QuadJet_noTag_pt_jet0_ref__24->SetBinContent(22,13206);
   _QuadJet_noTag_pt_jet0_ref__24->SetBinContent(23,11695);
   _QuadJet_noTag_pt_jet0_ref__24->SetBinContent(24,10138);
   _QuadJet_noTag_pt_jet0_ref__24->SetBinContent(25,9072);
   _QuadJet_noTag_pt_jet0_ref__24->SetBinContent(26,7923);
   _QuadJet_noTag_pt_jet0_ref__24->SetBinContent(27,6844);
   _QuadJet_noTag_pt_jet0_ref__24->SetBinContent(28,6347);
   _QuadJet_noTag_pt_jet0_ref__24->SetBinContent(29,5612);
   _QuadJet_noTag_pt_jet0_ref__24->SetBinContent(30,4962);
   _QuadJet_noTag_pt_jet0_ref__24->SetBinContent(31,4559);
   _QuadJet_noTag_pt_jet0_ref__24->SetBinContent(32,3857);
   _QuadJet_noTag_pt_jet0_ref__24->SetBinContent(33,3479);
   _QuadJet_noTag_pt_jet0_ref__24->SetBinContent(34,3199);
   _QuadJet_noTag_pt_jet0_ref__24->SetBinContent(35,2830);
   _QuadJet_noTag_pt_jet0_ref__24->SetBinContent(36,2606);
   _QuadJet_noTag_pt_jet0_ref__24->SetBinContent(37,2402);
   _QuadJet_noTag_pt_jet0_ref__24->SetBinContent(38,2051);
   _QuadJet_noTag_pt_jet0_ref__24->SetBinContent(39,1934);
   _QuadJet_noTag_pt_jet0_ref__24->SetBinContent(40,1670);
   _QuadJet_noTag_pt_jet0_ref__24->SetBinContent(41,1513);
   _QuadJet_noTag_pt_jet0_ref__24->SetBinContent(42,1352);
   _QuadJet_noTag_pt_jet0_ref__24->SetBinContent(43,1334);
   _QuadJet_noTag_pt_jet0_ref__24->SetBinContent(44,1157);
   _QuadJet_noTag_pt_jet0_ref__24->SetBinContent(45,1047);
   _QuadJet_noTag_pt_jet0_ref__24->SetBinContent(46,927);
   _QuadJet_noTag_pt_jet0_ref__24->SetBinContent(47,836);
   _QuadJet_noTag_pt_jet0_ref__24->SetBinContent(48,813);
   _QuadJet_noTag_pt_jet0_ref__24->SetBinContent(49,714);
   _QuadJet_noTag_pt_jet0_ref__24->SetBinContent(50,652);
   _QuadJet_noTag_pt_jet0_ref__24->SetBinContent(51,7210);
   _QuadJet_noTag_pt_jet0_ref__24->SetEntries(541691);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_pt_jet0_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 541691 ");
   ptstats_LaTex = ptstats->AddText("Mean  =  162.2");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  80.53");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_pt_jet0_ref__24->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_pt_jet0_ref__24);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_pt_jet0_ref__24->SetLineColor(ci);
   _QuadJet_noTag_pt_jet0_ref__24->GetXaxis()->SetTitle("Leading jet p_{T} [GeV]");
   _QuadJet_noTag_pt_jet0_ref__24->GetXaxis()->SetRange(1,50);
   _QuadJet_noTag_pt_jet0_ref__24->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet0_ref__24->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_pt_jet0_ref__24->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet0_ref__24->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_pt_jet0_ref__24->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet0_ref__24->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet0_ref__24->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet0_ref__24->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_pt_jet0_ref__24->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet0_ref__24->Draw("HIST");
   pt_jet0_2018_QuadJet_noTag_18_ref->Modified();
   pt_jet0_2018_QuadJet_noTag_18_ref->cd();
   pt_jet0_2018_QuadJet_noTag_18_ref->SetSelected(pt_jet0_2018_QuadJet_noTag_18_ref);
}
