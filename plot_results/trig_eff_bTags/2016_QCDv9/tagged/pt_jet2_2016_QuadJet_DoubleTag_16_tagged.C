#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2016_QuadJet_DoubleTag_16_tagged()
{
//=========Macro generated from canvas: pt_jet2_2016_QuadJet_DoubleTag_16_tagged/pt_jet2_2016_QuadJet_DoubleTag_16_tagged
//=========  (Thu Apr 27 10:19:46 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2016_QuadJet_DoubleTag_16_tagged = new TCanvas("pt_jet2_2016_QuadJet_DoubleTag_16_tagged", "pt_jet2_2016_QuadJet_DoubleTag_16_tagged",0,0,600,600);
   pt_jet2_2016_QuadJet_DoubleTag_16_tagged->SetHighLightColor(2);
   pt_jet2_2016_QuadJet_DoubleTag_16_tagged->Range(-109.1764,-0.1615385,585.8166,1.184615);
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
   _QuadJet_DoubleTag_tagged_pt_jet2__136->SetBinContent(6,0.02298851);
   _QuadJet_DoubleTag_tagged_pt_jet2__136->SetBinContent(7,0.04109589);
   _QuadJet_DoubleTag_tagged_pt_jet2__136->SetBinContent(8,0.02666667);
   _QuadJet_DoubleTag_tagged_pt_jet2__136->SetBinContent(9,0.02439024);
   _QuadJet_DoubleTag_tagged_pt_jet2__136->SetBinContent(10,0.02150538);
   _QuadJet_DoubleTag_tagged_pt_jet2__136->SetBinContent(11,0.01136364);
   _QuadJet_DoubleTag_tagged_pt_jet2__136->SetBinContent(13,0.03333333);
   _QuadJet_DoubleTag_tagged_pt_jet2__136->SetBinContent(15,0.05882353);
   _QuadJet_DoubleTag_tagged_pt_jet2__136->SetBinContent(16,0.09090909);
   _QuadJet_DoubleTag_tagged_pt_jet2__136->SetBinContent(21,0.125);
   _QuadJet_DoubleTag_tagged_pt_jet2__136->SetBinContent(33,1);
   _QuadJet_DoubleTag_tagged_pt_jet2__136->SetEntries(1.456076);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_DoubleTag_tagged_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  266.9");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  90.66");
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
