#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2017_QuadJet_noTag_17_tagged()
{
//=========Macro generated from canvas: pt_jet0_2017_QuadJet_noTag_17_tagged/pt_jet0_2017_QuadJet_noTag_17_tagged
//=========  (Thu Apr 27 10:18:23 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2017_QuadJet_noTag_17_tagged = new TCanvas("pt_jet0_2017_QuadJet_noTag_17_tagged", "pt_jet0_2017_QuadJet_noTag_17_tagged",0,0,600,600);
   pt_jet0_2017_QuadJet_noTag_17_tagged->SetHighLightColor(2);
   pt_jet0_2017_QuadJet_noTag_17_tagged->Range(-109.1764,-0.003713528,585.8166,0.02723254);
   pt_jet0_2017_QuadJet_noTag_17_tagged->SetFillColor(0);
   pt_jet0_2017_QuadJet_noTag_17_tagged->SetFillStyle(4000);
   pt_jet0_2017_QuadJet_noTag_17_tagged->SetBorderMode(0);
   pt_jet0_2017_QuadJet_noTag_17_tagged->SetBorderSize(2);
   pt_jet0_2017_QuadJet_noTag_17_tagged->SetLeftMargin(0.15709);
   pt_jet0_2017_QuadJet_noTag_17_tagged->SetRightMargin(0.1234783);
   pt_jet0_2017_QuadJet_noTag_17_tagged->SetBottomMargin(0.12);
   pt_jet0_2017_QuadJet_noTag_17_tagged->SetFrameFillStyle(1000);
   pt_jet0_2017_QuadJet_noTag_17_tagged->SetFrameBorderMode(0);
   pt_jet0_2017_QuadJet_noTag_17_tagged->SetFrameFillStyle(1000);
   pt_jet0_2017_QuadJet_noTag_17_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_tagged_pt_jet0__58 = new TH1D("_QuadJet_noTag_tagged_pt_jet0__58","",50,0,500);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(8,0.0008764242);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(9,0.00128041);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(10,0.002721829);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(11,0.003018109);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(12,0.005302227);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(13,0.005313496);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(14,0.005205321);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(15,0.006798517);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(16,0.002673797);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(17,0.007604563);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(18,0.005691057);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(19,0.004708098);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(20,0.006369427);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(21,0.01395939);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(22,0.004043127);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(23,0.004702194);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(24,0.006441224);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(25,0.007707129);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(26,0.006578947);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(27,0.005154639);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(28,0.01680672);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(29,0.002717391);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(30,0.004255319);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(31,0.007782101);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(32,0.003984064);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(33,0.01239669);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(34,0.005494505);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(36,0.006896552);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(38,0.0173913);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(39,0.008130081);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(41,0.01123596);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(42,0.02298851);
   _QuadJet_noTag_tagged_pt_jet0__58->SetBinContent(51,0.001992032);
   _QuadJet_noTag_tagged_pt_jet0__58->SetEntries(0.2262291);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_tagged_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  274.3");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  97.11");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_tagged_pt_jet0__58->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_tagged_pt_jet0__58);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_noTag_tagged_pt_jet0__58->SetLineColor(ci);
   _QuadJet_noTag_tagged_pt_jet0__58->GetXaxis()->SetTitle("Leading jet p_{T} [GeV]");
   _QuadJet_noTag_tagged_pt_jet0__58->GetXaxis()->SetRange(1,500);
   _QuadJet_noTag_tagged_pt_jet0__58->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet0__58->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_pt_jet0__58->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet0__58->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_noTag_tagged_pt_jet0__58->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet0__58->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet0__58->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet0__58->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_pt_jet0__58->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet0__58->Draw("HIST");
   pt_jet0_2017_QuadJet_noTag_17_tagged->Modified();
   pt_jet0_2017_QuadJet_noTag_17_tagged->cd();
   pt_jet0_2017_QuadJet_noTag_17_tagged->SetSelected(pt_jet0_2017_QuadJet_noTag_17_tagged);
}
