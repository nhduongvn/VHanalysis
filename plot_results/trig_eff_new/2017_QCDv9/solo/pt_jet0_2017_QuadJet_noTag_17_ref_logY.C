#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2017_QuadJet_noTag_17_ref_logY()
{
//=========Macro generated from canvas: pt_jet0_2017_QuadJet_noTag_17_ref/pt_jet0_2017_QuadJet_noTag_17_ref
//=========  (Tue Apr 18 16:14:00 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2017_QuadJet_noTag_17_ref = new TCanvas("pt_jet0_2017_QuadJet_noTag_17_ref", "pt_jet0_2017_QuadJet_noTag_17_ref",0,0,600,600);
   pt_jet0_2017_QuadJet_noTag_17_ref->SetHighLightColor(2);
   pt_jet0_2017_QuadJet_noTag_17_ref->Range(-100,1.003081,566.6667,5.285913);
   pt_jet0_2017_QuadJet_noTag_17_ref->SetFillColor(0);
   pt_jet0_2017_QuadJet_noTag_17_ref->SetBorderMode(0);
   pt_jet0_2017_QuadJet_noTag_17_ref->SetBorderSize(2);
   pt_jet0_2017_QuadJet_noTag_17_ref->SetLogy();
   pt_jet0_2017_QuadJet_noTag_17_ref->SetLeftMargin(0.15);
   pt_jet0_2017_QuadJet_noTag_17_ref->SetFrameBorderMode(0);
   pt_jet0_2017_QuadJet_noTag_17_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_pt_jet0_ref__18 = new TH1D("_QuadJet_noTag_pt_jet0_ref__18","",50,0,500);
   _QuadJet_noTag_pt_jet0_ref__18->SetBinContent(5,54);
   _QuadJet_noTag_pt_jet0_ref__18->SetBinContent(6,3363);
   _QuadJet_noTag_pt_jet0_ref__18->SetBinContent(7,14092);
   _QuadJet_noTag_pt_jet0_ref__18->SetBinContent(8,25021);
   _QuadJet_noTag_pt_jet0_ref__18->SetBinContent(9,33414);
   _QuadJet_noTag_pt_jet0_ref__18->SetBinContent(10,36918);
   _QuadJet_noTag_pt_jet0_ref__18->SetBinContent(11,38026);
   _QuadJet_noTag_pt_jet0_ref__18->SetBinContent(12,37244);
   _QuadJet_noTag_pt_jet0_ref__18->SetBinContent(13,35043);
   _QuadJet_noTag_pt_jet0_ref__18->SetBinContent(14,32126);
   _QuadJet_noTag_pt_jet0_ref__18->SetBinContent(15,29160);
   _QuadJet_noTag_pt_jet0_ref__18->SetBinContent(16,26240);
   _QuadJet_noTag_pt_jet0_ref__18->SetBinContent(17,23576);
   _QuadJet_noTag_pt_jet0_ref__18->SetBinContent(18,21410);
   _QuadJet_noTag_pt_jet0_ref__18->SetBinContent(19,18483);
   _QuadJet_noTag_pt_jet0_ref__18->SetBinContent(20,16364);
   _QuadJet_noTag_pt_jet0_ref__18->SetBinContent(21,14407);
   _QuadJet_noTag_pt_jet0_ref__18->SetBinContent(22,12732);
   _QuadJet_noTag_pt_jet0_ref__18->SetBinContent(23,11153);
   _QuadJet_noTag_pt_jet0_ref__18->SetBinContent(24,10044);
   _QuadJet_noTag_pt_jet0_ref__18->SetBinContent(25,8589);
   _QuadJet_noTag_pt_jet0_ref__18->SetBinContent(26,7644);
   _QuadJet_noTag_pt_jet0_ref__18->SetBinContent(27,6768);
   _QuadJet_noTag_pt_jet0_ref__18->SetBinContent(28,6080);
   _QuadJet_noTag_pt_jet0_ref__18->SetBinContent(29,5592);
   _QuadJet_noTag_pt_jet0_ref__18->SetBinContent(30,4775);
   _QuadJet_noTag_pt_jet0_ref__18->SetBinContent(31,4216);
   _QuadJet_noTag_pt_jet0_ref__18->SetBinContent(32,3959);
   _QuadJet_noTag_pt_jet0_ref__18->SetBinContent(33,3411);
   _QuadJet_noTag_pt_jet0_ref__18->SetBinContent(34,3083);
   _QuadJet_noTag_pt_jet0_ref__18->SetBinContent(35,2824);
   _QuadJet_noTag_pt_jet0_ref__18->SetBinContent(36,2413);
   _QuadJet_noTag_pt_jet0_ref__18->SetBinContent(37,2151);
   _QuadJet_noTag_pt_jet0_ref__18->SetBinContent(38,1947);
   _QuadJet_noTag_pt_jet0_ref__18->SetBinContent(39,1897);
   _QuadJet_noTag_pt_jet0_ref__18->SetBinContent(40,1586);
   _QuadJet_noTag_pt_jet0_ref__18->SetBinContent(41,1470);
   _QuadJet_noTag_pt_jet0_ref__18->SetBinContent(42,1306);
   _QuadJet_noTag_pt_jet0_ref__18->SetBinContent(43,1205);
   _QuadJet_noTag_pt_jet0_ref__18->SetBinContent(44,1066);
   _QuadJet_noTag_pt_jet0_ref__18->SetBinContent(45,992);
   _QuadJet_noTag_pt_jet0_ref__18->SetBinContent(46,913);
   _QuadJet_noTag_pt_jet0_ref__18->SetBinContent(47,797);
   _QuadJet_noTag_pt_jet0_ref__18->SetBinContent(48,756);
   _QuadJet_noTag_pt_jet0_ref__18->SetBinContent(49,683);
   _QuadJet_noTag_pt_jet0_ref__18->SetBinContent(50,606);
   _QuadJet_noTag_pt_jet0_ref__18->SetBinContent(51,6801);
   _QuadJet_noTag_pt_jet0_ref__18->SetEntries(522400);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_pt_jet0_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 522400 ");
   ptstats_LaTex = ptstats->AddText("Mean  =  162.2");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  80.27");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_pt_jet0_ref__18->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_pt_jet0_ref__18);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_pt_jet0_ref__18->SetLineColor(ci);
   _QuadJet_noTag_pt_jet0_ref__18->GetXaxis()->SetTitle("Leading jet p_{T} [GeV]");
   _QuadJet_noTag_pt_jet0_ref__18->GetXaxis()->SetRange(1,50);
   _QuadJet_noTag_pt_jet0_ref__18->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet0_ref__18->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_pt_jet0_ref__18->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet0_ref__18->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_pt_jet0_ref__18->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet0_ref__18->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet0_ref__18->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet0_ref__18->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_pt_jet0_ref__18->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet0_ref__18->Draw("HIST");
   pt_jet0_2017_QuadJet_noTag_17_ref->Modified();
   pt_jet0_2017_QuadJet_noTag_17_ref->cd();
   pt_jet0_2017_QuadJet_noTag_17_ref->SetSelected(pt_jet0_2017_QuadJet_noTag_17_ref);
}
