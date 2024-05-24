#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_ZHcc_tagFirst_18_logY()
{
//=========Macro generated from canvas: Sphericity_ZHcc_tagFirst_18/Sphericity_ZHcc_tagFirst_18
//=========  (Thu May 23 20:48:32 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_ZHcc_tagFirst_18 = new TCanvas("Sphericity_ZHcc_tagFirst_18", "Sphericity_ZHcc_tagFirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_ZHcc_tagFirst_18->SetHighLightColor(2);
   Sphericity_ZHcc_tagFirst_18->Range(-0.2,-4.273778,1.133333,0.9490676);
   Sphericity_ZHcc_tagFirst_18->SetFillColor(0);
   Sphericity_ZHcc_tagFirst_18->SetFillStyle(4000);
   Sphericity_ZHcc_tagFirst_18->SetBorderMode(0);
   Sphericity_ZHcc_tagFirst_18->SetBorderSize(2);
   Sphericity_ZHcc_tagFirst_18->SetLogy();
   Sphericity_ZHcc_tagFirst_18->SetLeftMargin(0.15);
   Sphericity_ZHcc_tagFirst_18->SetFrameFillStyle(1000);
   Sphericity_ZHcc_tagFirst_18->SetFrameBorderMode(0);
   Sphericity_ZHcc_tagFirst_18->SetFrameFillStyle(1000);
   Sphericity_ZHcc_tagFirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Sphericity__423 = new TH1D("VH_tagFirst_Sphericity__423","",25,0,1);
   VH_tagFirst_Sphericity__423->SetBinContent(1,1.410048);
   VH_tagFirst_Sphericity__423->SetBinContent(2,1.202367);
   VH_tagFirst_Sphericity__423->SetBinContent(3,0.6129512);
   VH_tagFirst_Sphericity__423->SetBinContent(4,0.4780394);
   VH_tagFirst_Sphericity__423->SetBinContent(5,0.2909136);
   VH_tagFirst_Sphericity__423->SetBinContent(6,0.1282148);
   VH_tagFirst_Sphericity__423->SetBinContent(7,0.07370889);
   VH_tagFirst_Sphericity__423->SetBinContent(8,0.03906701);
   VH_tagFirst_Sphericity__423->SetBinContent(9,0.01185699);
   VH_tagFirst_Sphericity__423->SetBinContent(10,0.01393351);
   VH_tagFirst_Sphericity__423->SetBinContent(11,0.0108084);
   VH_tagFirst_Sphericity__423->SetBinContent(12,0.006966327);
   VH_tagFirst_Sphericity__423->SetBinContent(13,0.004393891);
   VH_tagFirst_Sphericity__423->SetBinContent(14,0.003835212);
   VH_tagFirst_Sphericity__423->SetBinContent(15,0.003822227);
   VH_tagFirst_Sphericity__423->SetBinContent(16,0.0007916244);
   VH_tagFirst_Sphericity__423->SetBinContent(17,0.001006392);
   VH_tagFirst_Sphericity__423->SetBinContent(18,0.002984691);
   VH_tagFirst_Sphericity__423->SetBinContent(19,0.0003673797);
   VH_tagFirst_Sphericity__423->SetBinContent(20,0.0003544348);
   VH_tagFirst_Sphericity__423->SetBinError(1,0.06563436);
   VH_tagFirst_Sphericity__423->SetBinError(2,0.05696428);
   VH_tagFirst_Sphericity__423->SetBinError(3,0.04207594);
   VH_tagFirst_Sphericity__423->SetBinError(4,0.03494899);
   VH_tagFirst_Sphericity__423->SetBinError(5,0.02758221);
   VH_tagFirst_Sphericity__423->SetBinError(6,0.01617971);
   VH_tagFirst_Sphericity__423->SetBinError(7,0.01612517);
   VH_tagFirst_Sphericity__423->SetBinError(8,0.009577202);
   VH_tagFirst_Sphericity__423->SetBinError(9,0.003215024);
   VH_tagFirst_Sphericity__423->SetBinError(10,0.00506653);
   VH_tagFirst_Sphericity__423->SetBinError(11,0.003711871);
   VH_tagFirst_Sphericity__423->SetBinError(12,0.003065792);
   VH_tagFirst_Sphericity__423->SetBinError(13,0.002593165);
   VH_tagFirst_Sphericity__423->SetBinError(14,0.001853677);
   VH_tagFirst_Sphericity__423->SetBinError(15,0.001485743);
   VH_tagFirst_Sphericity__423->SetBinError(16,0.0006024343);
   VH_tagFirst_Sphericity__423->SetBinError(17,0.0007215532);
   VH_tagFirst_Sphericity__423->SetBinError(18,0.002711711);
   VH_tagFirst_Sphericity__423->SetBinError(19,0.0003673797);
   VH_tagFirst_Sphericity__423->SetBinError(20,0.0003544348);
   VH_tagFirst_Sphericity__423->SetEntries(4423);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Sphericity__423->SetLineColor(ci);
   VH_tagFirst_Sphericity__423->GetXaxis()->SetTitle("Sphericity");
   VH_tagFirst_Sphericity__423->GetXaxis()->SetRange(1,25);
   VH_tagFirst_Sphericity__423->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__423->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Sphericity__423->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__423->GetYaxis()->SetTitle("Events/0.04");
   VH_tagFirst_Sphericity__423->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__423->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Sphericity__423->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Sphericity__423->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Sphericity__423->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__423->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__423->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Sphericity__423->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__423->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_ZHcc_tagFirst_18->Modified();
   Sphericity_ZHcc_tagFirst_18->cd();
   Sphericity_ZHcc_tagFirst_18->SetSelected(Sphericity_ZHcc_tagFirst_18);
}
