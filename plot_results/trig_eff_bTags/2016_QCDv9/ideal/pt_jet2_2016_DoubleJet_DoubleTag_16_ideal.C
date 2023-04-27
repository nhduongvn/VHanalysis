#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2016_DoubleJet_DoubleTag_16_ideal()
{
//=========Macro generated from canvas: pt_jet2_2016_DoubleJet_DoubleTag_16_ideal/pt_jet2_2016_DoubleJet_DoubleTag_16_ideal
//=========  (Thu Apr 27 10:19:47 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2016_DoubleJet_DoubleTag_16_ideal = new TCanvas("pt_jet2_2016_DoubleJet_DoubleTag_16_ideal", "pt_jet2_2016_DoubleJet_DoubleTag_16_ideal",0,0,600,600);
   pt_jet2_2016_DoubleJet_DoubleTag_16_ideal->SetHighLightColor(2);
   pt_jet2_2016_DoubleJet_DoubleTag_16_ideal->Range(-109.1764,-0.08076923,585.8166,0.5923077);
   pt_jet2_2016_DoubleJet_DoubleTag_16_ideal->SetFillColor(0);
   pt_jet2_2016_DoubleJet_DoubleTag_16_ideal->SetFillStyle(4000);
   pt_jet2_2016_DoubleJet_DoubleTag_16_ideal->SetBorderMode(0);
   pt_jet2_2016_DoubleJet_DoubleTag_16_ideal->SetBorderSize(2);
   pt_jet2_2016_DoubleJet_DoubleTag_16_ideal->SetLeftMargin(0.15709);
   pt_jet2_2016_DoubleJet_DoubleTag_16_ideal->SetRightMargin(0.1234783);
   pt_jet2_2016_DoubleJet_DoubleTag_16_ideal->SetBottomMargin(0.12);
   pt_jet2_2016_DoubleJet_DoubleTag_16_ideal->SetFrameFillStyle(1000);
   pt_jet2_2016_DoubleJet_DoubleTag_16_ideal->SetFrameBorderMode(0);
   pt_jet2_2016_DoubleJet_DoubleTag_16_ideal->SetFrameFillStyle(1000);
   pt_jet2_2016_DoubleJet_DoubleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_ideal_pt_jet2__250 = new TH1D("_DoubleJet_DoubleTag_ideal_pt_jet2__250","",50,0,500);
   _DoubleJet_DoubleTag_ideal_pt_jet2__250->SetBinContent(5,0.1666667);
   _DoubleJet_DoubleTag_ideal_pt_jet2__250->SetBinContent(6,0.05);
   _DoubleJet_DoubleTag_ideal_pt_jet2__250->SetBinContent(7,0.03508772);
   _DoubleJet_DoubleTag_ideal_pt_jet2__250->SetBinContent(8,0.02352941);
   _DoubleJet_DoubleTag_ideal_pt_jet2__250->SetBinContent(9,0.02);
   _DoubleJet_DoubleTag_ideal_pt_jet2__250->SetBinContent(10,0.03225806);
   _DoubleJet_DoubleTag_ideal_pt_jet2__250->SetBinContent(11,0.04545455);
   _DoubleJet_DoubleTag_ideal_pt_jet2__250->SetBinContent(12,0.0483871);
   _DoubleJet_DoubleTag_ideal_pt_jet2__250->SetBinContent(13,0.05);
   _DoubleJet_DoubleTag_ideal_pt_jet2__250->SetBinContent(14,0.1470588);
   _DoubleJet_DoubleTag_ideal_pt_jet2__250->SetBinContent(15,0.05882353);
   _DoubleJet_DoubleTag_ideal_pt_jet2__250->SetBinContent(29,0.5);
   _DoubleJet_DoubleTag_ideal_pt_jet2__250->SetEntries(1.177266);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_ideal_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  175.4");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  98.51");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_ideal_pt_jet2__250->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_ideal_pt_jet2__250);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _DoubleJet_DoubleTag_ideal_pt_jet2__250->SetLineColor(ci);
   _DoubleJet_DoubleTag_ideal_pt_jet2__250->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _DoubleJet_DoubleTag_ideal_pt_jet2__250->GetXaxis()->SetRange(1,500);
   _DoubleJet_DoubleTag_ideal_pt_jet2__250->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_ideal_pt_jet2__250->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_ideal_pt_jet2__250->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_ideal_pt_jet2__250->GetYaxis()->SetTitle("Efficiency");
   _DoubleJet_DoubleTag_ideal_pt_jet2__250->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_ideal_pt_jet2__250->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_ideal_pt_jet2__250->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_ideal_pt_jet2__250->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_ideal_pt_jet2__250->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_ideal_pt_jet2__250->Draw("HIST");
   pt_jet2_2016_DoubleJet_DoubleTag_16_ideal->Modified();
   pt_jet2_2016_DoubleJet_DoubleTag_16_ideal->cd();
   pt_jet2_2016_DoubleJet_DoubleTag_16_ideal->SetSelected(pt_jet2_2016_DoubleJet_DoubleTag_16_ideal);
}
