#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2016_DoubleJet_DoubleTag_16_ideal()
{
//=========Macro generated from canvas: pt_jet1_2016_DoubleJet_DoubleTag_16_ideal/pt_jet1_2016_DoubleJet_DoubleTag_16_ideal
//=========  (Thu Apr 27 10:19:47 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2016_DoubleJet_DoubleTag_16_ideal = new TCanvas("pt_jet1_2016_DoubleJet_DoubleTag_16_ideal", "pt_jet1_2016_DoubleJet_DoubleTag_16_ideal",0,0,600,600);
   pt_jet1_2016_DoubleJet_DoubleTag_16_ideal->SetHighLightColor(2);
   pt_jet1_2016_DoubleJet_DoubleTag_16_ideal->Range(-109.1764,-0.02692308,585.8166,0.1974359);
   pt_jet1_2016_DoubleJet_DoubleTag_16_ideal->SetFillColor(0);
   pt_jet1_2016_DoubleJet_DoubleTag_16_ideal->SetFillStyle(4000);
   pt_jet1_2016_DoubleJet_DoubleTag_16_ideal->SetBorderMode(0);
   pt_jet1_2016_DoubleJet_DoubleTag_16_ideal->SetBorderSize(2);
   pt_jet1_2016_DoubleJet_DoubleTag_16_ideal->SetLeftMargin(0.15709);
   pt_jet1_2016_DoubleJet_DoubleTag_16_ideal->SetRightMargin(0.1234783);
   pt_jet1_2016_DoubleJet_DoubleTag_16_ideal->SetBottomMargin(0.12);
   pt_jet1_2016_DoubleJet_DoubleTag_16_ideal->SetFrameFillStyle(1000);
   pt_jet1_2016_DoubleJet_DoubleTag_16_ideal->SetFrameBorderMode(0);
   pt_jet1_2016_DoubleJet_DoubleTag_16_ideal->SetFrameFillStyle(1000);
   pt_jet1_2016_DoubleJet_DoubleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_ideal_pt_jet1__238 = new TH1D("_DoubleJet_DoubleTag_ideal_pt_jet1__238","",50,0,500);
   _DoubleJet_DoubleTag_ideal_pt_jet1__238->SetBinContent(10,0.03370787);
   _DoubleJet_DoubleTag_ideal_pt_jet1__238->SetBinContent(11,0.01204819);
   _DoubleJet_DoubleTag_ideal_pt_jet1__238->SetBinContent(12,0.07594937);
   _DoubleJet_DoubleTag_ideal_pt_jet1__238->SetBinContent(13,0.05405405);
   _DoubleJet_DoubleTag_ideal_pt_jet1__238->SetBinContent(14,0.01960784);
   _DoubleJet_DoubleTag_ideal_pt_jet1__238->SetBinContent(15,0.02325581);
   _DoubleJet_DoubleTag_ideal_pt_jet1__238->SetBinContent(16,0.04545455);
   _DoubleJet_DoubleTag_ideal_pt_jet1__238->SetBinContent(17,0.04166667);
   _DoubleJet_DoubleTag_ideal_pt_jet1__238->SetBinContent(18,0.07142857);
   _DoubleJet_DoubleTag_ideal_pt_jet1__238->SetBinContent(20,0.06060606);
   _DoubleJet_DoubleTag_ideal_pt_jet1__238->SetBinContent(22,0.12);
   _DoubleJet_DoubleTag_ideal_pt_jet1__238->SetBinContent(28,0.1428571);
   _DoubleJet_DoubleTag_ideal_pt_jet1__238->SetBinContent(30,0.1666667);
   _DoubleJet_DoubleTag_ideal_pt_jet1__238->SetEntries(0.8673028);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_ideal_pt_jet1");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  205.8");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  67.75");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_ideal_pt_jet1__238->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_ideal_pt_jet1__238);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _DoubleJet_DoubleTag_ideal_pt_jet1__238->SetLineColor(ci);
   _DoubleJet_DoubleTag_ideal_pt_jet1__238->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _DoubleJet_DoubleTag_ideal_pt_jet1__238->GetXaxis()->SetRange(1,500);
   _DoubleJet_DoubleTag_ideal_pt_jet1__238->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_ideal_pt_jet1__238->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_ideal_pt_jet1__238->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_ideal_pt_jet1__238->GetYaxis()->SetTitle("Efficiency");
   _DoubleJet_DoubleTag_ideal_pt_jet1__238->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_ideal_pt_jet1__238->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_ideal_pt_jet1__238->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_ideal_pt_jet1__238->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_ideal_pt_jet1__238->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_ideal_pt_jet1__238->Draw("HIST");
   pt_jet1_2016_DoubleJet_DoubleTag_16_ideal->Modified();
   pt_jet1_2016_DoubleJet_DoubleTag_16_ideal->cd();
   pt_jet1_2016_DoubleJet_DoubleTag_16_ideal->SetSelected(pt_jet1_2016_DoubleJet_DoubleTag_16_ideal);
}
