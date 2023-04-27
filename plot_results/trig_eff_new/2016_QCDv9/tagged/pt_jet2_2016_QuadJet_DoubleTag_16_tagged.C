#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2016_QuadJet_DoubleTag_16_tagged()
{
//=========Macro generated from canvas: pt_jet2_2016_QuadJet_DoubleTag_16_tagged/pt_jet2_2016_QuadJet_DoubleTag_16_tagged
//=========  (Thu Apr 27 10:18:37 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2016_QuadJet_DoubleTag_16_tagged = new TCanvas("pt_jet2_2016_QuadJet_DoubleTag_16_tagged", "pt_jet2_2016_QuadJet_DoubleTag_16_tagged",0,0,600,600);
   pt_jet2_2016_QuadJet_DoubleTag_16_tagged->SetHighLightColor(2);
   pt_jet2_2016_QuadJet_DoubleTag_16_tagged->Range(-109.1764,-0.01346154,585.8166,0.09871795);
   pt_jet2_2016_QuadJet_DoubleTag_16_tagged->SetFillColor(0);
   pt_jet2_2016_QuadJet_DoubleTag_16_tagged->SetFillStyle(4000);
   pt_jet2_2016_QuadJet_DoubleTag_16_tagged->SetBorderMode(0);
   pt_jet2_2016_QuadJet_DoubleTag_16_tagged->SetBorderSize(2);
   pt_jet2_2016_QuadJet_DoubleTag_16_tagged->SetLeftMargin(0.15709);
   pt_jet2_2016_QuadJet_DoubleTag_16_tagged->SetRightMargin(0.1234783);
   pt_jet2_2016_QuadJet_DoubleTag_16_tagged->SetBottomMargin(0.12);
   pt_jet2_2016_QuadJet_DoubleTag_16_tagged->SetFrameFillStyle(1000);
   pt_jet2_2016_QuadJet_DoubleTag_16_tagged->SetFrameBorderMode(0);
   pt_jet2_2016_QuadJet_DoubleTag_16_tagged->SetFrameFillStyle(1000);
   pt_jet2_2016_QuadJet_DoubleTag_16_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_DoubleTag_tagged_pt_jet2__136 = new TH1D("_QuadJet_DoubleTag_tagged_pt_jet2__136","",50,0,500);
   _QuadJet_DoubleTag_tagged_pt_jet2__136->SetBinContent(5,0.003875969);
   _QuadJet_DoubleTag_tagged_pt_jet2__136->SetBinContent(6,0.01685912);
   _QuadJet_DoubleTag_tagged_pt_jet2__136->SetBinContent(7,0.02080524);
   _QuadJet_DoubleTag_tagged_pt_jet2__136->SetBinContent(8,0.02767154);
   _QuadJet_DoubleTag_tagged_pt_jet2__136->SetBinContent(9,0.02759197);
   _QuadJet_DoubleTag_tagged_pt_jet2__136->SetBinContent(10,0.02334481);
   _QuadJet_DoubleTag_tagged_pt_jet2__136->SetBinContent(11,0.0321305);
   _QuadJet_DoubleTag_tagged_pt_jet2__136->SetBinContent(12,0.02452698);
   _QuadJet_DoubleTag_tagged_pt_jet2__136->SetBinContent(13,0.03301887);
   _QuadJet_DoubleTag_tagged_pt_jet2__136->SetBinContent(14,0.02918782);
   _QuadJet_DoubleTag_tagged_pt_jet2__136->SetBinContent(15,0.02961672);
   _QuadJet_DoubleTag_tagged_pt_jet2__136->SetBinContent(16,0.02888889);
   _QuadJet_DoubleTag_tagged_pt_jet2__136->SetBinContent(17,0.04229607);
   _QuadJet_DoubleTag_tagged_pt_jet2__136->SetBinContent(18,0.02066116);
   _QuadJet_DoubleTag_tagged_pt_jet2__136->SetBinContent(19,0.02453988);
   _QuadJet_DoubleTag_tagged_pt_jet2__136->SetBinContent(20,0.03448276);
   _QuadJet_DoubleTag_tagged_pt_jet2__136->SetBinContent(21,0.01769912);
   _QuadJet_DoubleTag_tagged_pt_jet2__136->SetBinContent(22,0.04938272);
   _QuadJet_DoubleTag_tagged_pt_jet2__136->SetBinContent(25,0.05882353);
   _QuadJet_DoubleTag_tagged_pt_jet2__136->SetBinContent(27,0.03703704);
   _QuadJet_DoubleTag_tagged_pt_jet2__136->SetBinContent(28,0.03846154);
   _QuadJet_DoubleTag_tagged_pt_jet2__136->SetBinContent(29,0.04761905);
   _QuadJet_DoubleTag_tagged_pt_jet2__136->SetBinContent(32,0.08333333);
   _QuadJet_DoubleTag_tagged_pt_jet2__136->SetEntries(0.7518546);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_DoubleTag_tagged_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  =    190");
   ptstats_LaTex = ptstats->AddText("Std Dev   =   79.5");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_DoubleTag_tagged_pt_jet2__136->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_DoubleTag_tagged_pt_jet2__136);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_DoubleTag_tagged_pt_jet2__136->SetLineColor(ci);
   _QuadJet_DoubleTag_tagged_pt_jet2__136->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _QuadJet_DoubleTag_tagged_pt_jet2__136->GetXaxis()->SetRange(1,500);
   _QuadJet_DoubleTag_tagged_pt_jet2__136->GetXaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_pt_jet2__136->GetXaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_tagged_pt_jet2__136->GetXaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_pt_jet2__136->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_DoubleTag_tagged_pt_jet2__136->GetYaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_pt_jet2__136->GetYaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_pt_jet2__136->GetZaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_pt_jet2__136->GetZaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_tagged_pt_jet2__136->GetZaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_pt_jet2__136->Draw("HIST");
   pt_jet2_2016_QuadJet_DoubleTag_16_tagged->Modified();
   pt_jet2_2016_QuadJet_DoubleTag_16_tagged->cd();
   pt_jet2_2016_QuadJet_DoubleTag_16_tagged->SetSelected(pt_jet2_2016_QuadJet_DoubleTag_16_tagged);
}
