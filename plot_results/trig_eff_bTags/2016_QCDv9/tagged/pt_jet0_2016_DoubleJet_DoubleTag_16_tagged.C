#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2016_DoubleJet_DoubleTag_16_tagged()
{
//=========Macro generated from canvas: pt_jet0_2016_DoubleJet_DoubleTag_16_tagged/pt_jet0_2016_DoubleJet_DoubleTag_16_tagged
//=========  (Thu Apr 27 10:19:45 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2016_DoubleJet_DoubleTag_16_tagged = new TCanvas("pt_jet0_2016_DoubleJet_DoubleTag_16_tagged", "pt_jet0_2016_DoubleJet_DoubleTag_16_tagged",0,0,600,600);
   pt_jet0_2016_DoubleJet_DoubleTag_16_tagged->SetHighLightColor(2);
   pt_jet0_2016_DoubleJet_DoubleTag_16_tagged->Range(-109.1764,-0.02937063,585.8166,0.2153846);
   pt_jet0_2016_DoubleJet_DoubleTag_16_tagged->SetFillColor(0);
   pt_jet0_2016_DoubleJet_DoubleTag_16_tagged->SetFillStyle(4000);
   pt_jet0_2016_DoubleJet_DoubleTag_16_tagged->SetBorderMode(0);
   pt_jet0_2016_DoubleJet_DoubleTag_16_tagged->SetBorderSize(2);
   pt_jet0_2016_DoubleJet_DoubleTag_16_tagged->SetLeftMargin(0.15709);
   pt_jet0_2016_DoubleJet_DoubleTag_16_tagged->SetRightMargin(0.1234783);
   pt_jet0_2016_DoubleJet_DoubleTag_16_tagged->SetBottomMargin(0.12);
   pt_jet0_2016_DoubleJet_DoubleTag_16_tagged->SetFrameFillStyle(1000);
   pt_jet0_2016_DoubleJet_DoubleTag_16_tagged->SetFrameBorderMode(0);
   pt_jet0_2016_DoubleJet_DoubleTag_16_tagged->SetFrameFillStyle(1000);
   pt_jet0_2016_DoubleJet_DoubleTag_16_tagged->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_tagged_pt_jet0__118 = new TH1D("_DoubleJet_DoubleTag_tagged_pt_jet0__118","",50,0,500);
   _DoubleJet_DoubleTag_tagged_pt_jet0__118->SetBinContent(13,0.05882353);
   _DoubleJet_DoubleTag_tagged_pt_jet0__118->SetBinContent(14,0.025);
   _DoubleJet_DoubleTag_tagged_pt_jet0__118->SetBinContent(15,0.04615385);
   _DoubleJet_DoubleTag_tagged_pt_jet0__118->SetBinContent(16,0.04255319);
   _DoubleJet_DoubleTag_tagged_pt_jet0__118->SetBinContent(17,0.02380952);
   _DoubleJet_DoubleTag_tagged_pt_jet0__118->SetBinContent(19,0.02777778);
   _DoubleJet_DoubleTag_tagged_pt_jet0__118->SetBinContent(20,0.1052632);
   _DoubleJet_DoubleTag_tagged_pt_jet0__118->SetBinContent(21,0.03571429);
   _DoubleJet_DoubleTag_tagged_pt_jet0__118->SetBinContent(22,0.09375);
   _DoubleJet_DoubleTag_tagged_pt_jet0__118->SetBinContent(24,0.06666667);
   _DoubleJet_DoubleTag_tagged_pt_jet0__118->SetBinContent(26,0.05555556);
   _DoubleJet_DoubleTag_tagged_pt_jet0__118->SetBinContent(27,0.05);
   _DoubleJet_DoubleTag_tagged_pt_jet0__118->SetBinContent(28,0.04347826);
   _DoubleJet_DoubleTag_tagged_pt_jet0__118->SetBinContent(38,0.125);
   _DoubleJet_DoubleTag_tagged_pt_jet0__118->SetBinContent(39,0.1818182);
   _DoubleJet_DoubleTag_tagged_pt_jet0__118->SetEntries(0.981364);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_tagged_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  257.8");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  91.41");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_tagged_pt_jet0__118->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_tagged_pt_jet0__118);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _DoubleJet_DoubleTag_tagged_pt_jet0__118->SetLineColor(ci);
   _DoubleJet_DoubleTag_tagged_pt_jet0__118->GetXaxis()->SetTitle("Leading jet p_{T} [GeV]");
   _DoubleJet_DoubleTag_tagged_pt_jet0__118->GetXaxis()->SetRange(1,500);
   _DoubleJet_DoubleTag_tagged_pt_jet0__118->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet0__118->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_tagged_pt_jet0__118->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet0__118->GetYaxis()->SetTitle("Efficiency");
   _DoubleJet_DoubleTag_tagged_pt_jet0__118->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet0__118->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet0__118->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet0__118->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_tagged_pt_jet0__118->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet0__118->Draw("HIST");
   pt_jet0_2016_DoubleJet_DoubleTag_16_tagged->Modified();
   pt_jet0_2016_DoubleJet_DoubleTag_16_tagged->cd();
   pt_jet0_2016_DoubleJet_DoubleTag_16_tagged->SetSelected(pt_jet0_2016_DoubleJet_DoubleTag_16_tagged);
}
