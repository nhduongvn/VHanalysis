#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2017_QuadJet_noTag_17_ref_logY()
{
//=========Macro generated from canvas: pt_jet1_2017_QuadJet_noTag_17_ref/pt_jet1_2017_QuadJet_noTag_17_ref
//=========  (Wed Apr 26 16:41:49 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2017_QuadJet_noTag_17_ref = new TCanvas("pt_jet1_2017_QuadJet_noTag_17_ref", "pt_jet1_2017_QuadJet_noTag_17_ref",0,0,600,600);
   pt_jet1_2017_QuadJet_noTag_17_ref->SetHighLightColor(2);
   pt_jet1_2017_QuadJet_noTag_17_ref->Range(-100,1.407622,566.6667,5.493819);
   pt_jet1_2017_QuadJet_noTag_17_ref->SetFillColor(0);
   pt_jet1_2017_QuadJet_noTag_17_ref->SetBorderMode(0);
   pt_jet1_2017_QuadJet_noTag_17_ref->SetBorderSize(2);
   pt_jet1_2017_QuadJet_noTag_17_ref->SetLogy();
   pt_jet1_2017_QuadJet_noTag_17_ref->SetLeftMargin(0.15);
   pt_jet1_2017_QuadJet_noTag_17_ref->SetFrameBorderMode(0);
   pt_jet1_2017_QuadJet_noTag_17_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_pt_jet1_ref__12 = new TH1D("_QuadJet_noTag_pt_jet1_ref__12","",50,0,500);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(5,1910);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(6,29241);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(7,56827);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(8,64217);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(9,60806);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(10,52617);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(11,44242);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(12,36545);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(13,29130);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(14,23671);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(15,19304);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(16,15611);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(17,12848);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(18,10401);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(19,8532);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(20,6971);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(21,5746);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(22,4826);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(23,3924);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(24,3278);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(25,2808);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(26,2334);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(27,2086);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(28,1816);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(29,1479);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(30,1223);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(31,1127);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(32,987);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(33,867);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(34,761);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(35,652);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(36,570);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(37,481);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(38,450);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(39,381);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(40,334);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(41,306);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(42,275);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(43,258);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(44,219);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(45,201);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(46,200);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(47,163);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(48,146);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(49,131);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(50,137);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(51,1398);
   _QuadJet_noTag_pt_jet1_ref__12->SetEntries(512437);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_pt_jet1_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 512437 ");
   ptstats_LaTex = ptstats->AddText("Mean  =    114");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  56.99");
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
