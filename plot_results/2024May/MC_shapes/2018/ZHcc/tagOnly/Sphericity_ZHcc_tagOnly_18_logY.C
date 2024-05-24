#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_ZHcc_tagOnly_18_logY()
{
//=========Macro generated from canvas: Sphericity_ZHcc_tagOnly_18/Sphericity_ZHcc_tagOnly_18
//=========  (Thu May 23 20:48:41 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_ZHcc_tagOnly_18 = new TCanvas("Sphericity_ZHcc_tagOnly_18", "Sphericity_ZHcc_tagOnly_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_ZHcc_tagOnly_18->SetHighLightColor(2);
   Sphericity_ZHcc_tagOnly_18->Range(-0.2,-4.271707,1.133333,0.9304224);
   Sphericity_ZHcc_tagOnly_18->SetFillColor(0);
   Sphericity_ZHcc_tagOnly_18->SetFillStyle(4000);
   Sphericity_ZHcc_tagOnly_18->SetBorderMode(0);
   Sphericity_ZHcc_tagOnly_18->SetBorderSize(2);
   Sphericity_ZHcc_tagOnly_18->SetLogy();
   Sphericity_ZHcc_tagOnly_18->SetLeftMargin(0.15);
   Sphericity_ZHcc_tagOnly_18->SetFrameFillStyle(1000);
   Sphericity_ZHcc_tagOnly_18->SetFrameBorderMode(0);
   Sphericity_ZHcc_tagOnly_18->SetFrameFillStyle(1000);
   Sphericity_ZHcc_tagOnly_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Sphericity__1143 = new TH1D("VH_tagOnly_Sphericity__1143","",25,0,1);
   VH_tagOnly_Sphericity__1143->SetBinContent(1,1.357252);
   VH_tagOnly_Sphericity__1143->SetBinContent(2,1.159355);
   VH_tagOnly_Sphericity__1143->SetBinContent(3,0.5714877);
   VH_tagOnly_Sphericity__1143->SetBinContent(4,0.4568428);
   VH_tagOnly_Sphericity__1143->SetBinContent(5,0.2836616);
   VH_tagOnly_Sphericity__1143->SetBinContent(6,0.1198951);
   VH_tagOnly_Sphericity__1143->SetBinContent(7,0.07236176);
   VH_tagOnly_Sphericity__1143->SetBinContent(8,0.03493815);
   VH_tagOnly_Sphericity__1143->SetBinContent(9,0.01185699);
   VH_tagOnly_Sphericity__1143->SetBinContent(10,0.01384746);
   VH_tagOnly_Sphericity__1143->SetBinContent(11,0.009967887);
   VH_tagOnly_Sphericity__1143->SetBinContent(12,0.003417982);
   VH_tagOnly_Sphericity__1143->SetBinContent(13,0.004792926);
   VH_tagOnly_Sphericity__1143->SetBinContent(14,0.003835212);
   VH_tagOnly_Sphericity__1143->SetBinContent(15,0.002794718);
   VH_tagOnly_Sphericity__1143->SetBinContent(16,0.001449578);
   VH_tagOnly_Sphericity__1143->SetBinContent(17,0.001006392);
   VH_tagOnly_Sphericity__1143->SetBinContent(18,0.002984691);
   VH_tagOnly_Sphericity__1143->SetBinContent(19,0.0003673797);
   VH_tagOnly_Sphericity__1143->SetBinContent(20,0.0003544348);
   VH_tagOnly_Sphericity__1143->SetBinError(1,0.06460574);
   VH_tagOnly_Sphericity__1143->SetBinError(2,0.05632047);
   VH_tagOnly_Sphericity__1143->SetBinError(3,0.04052566);
   VH_tagOnly_Sphericity__1143->SetBinError(4,0.03418632);
   VH_tagOnly_Sphericity__1143->SetBinError(5,0.02709082);
   VH_tagOnly_Sphericity__1143->SetBinError(6,0.01565954);
   VH_tagOnly_Sphericity__1143->SetBinError(7,0.01610442);
   VH_tagOnly_Sphericity__1143->SetBinError(8,0.009038564);
   VH_tagOnly_Sphericity__1143->SetBinError(9,0.003215024);
   VH_tagOnly_Sphericity__1143->SetBinError(10,0.00506035);
   VH_tagOnly_Sphericity__1143->SetBinError(11,0.003661267);
   VH_tagOnly_Sphericity__1143->SetBinError(12,0.001305175);
   VH_tagOnly_Sphericity__1143->SetBinError(13,0.002623687);
   VH_tagOnly_Sphericity__1143->SetBinError(14,0.001853677);
   VH_tagOnly_Sphericity__1143->SetBinError(15,0.001073154);
   VH_tagOnly_Sphericity__1143->SetBinError(16,0.001053313);
   VH_tagOnly_Sphericity__1143->SetBinError(17,0.0007215532);
   VH_tagOnly_Sphericity__1143->SetBinError(18,0.002711711);
   VH_tagOnly_Sphericity__1143->SetBinError(19,0.0003673797);
   VH_tagOnly_Sphericity__1143->SetBinError(20,0.0003544348);
   VH_tagOnly_Sphericity__1143->SetEntries(4239);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Sphericity__1143->SetLineColor(ci);
   VH_tagOnly_Sphericity__1143->GetXaxis()->SetTitle("Sphericity");
   VH_tagOnly_Sphericity__1143->GetXaxis()->SetRange(1,25);
   VH_tagOnly_Sphericity__1143->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1143->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Sphericity__1143->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1143->GetYaxis()->SetTitle("Events/0.04");
   VH_tagOnly_Sphericity__1143->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1143->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Sphericity__1143->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Sphericity__1143->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Sphericity__1143->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1143->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1143->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Sphericity__1143->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1143->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_ZHcc_tagOnly_18->Modified();
   Sphericity_ZHcc_tagOnly_18->cd();
   Sphericity_ZHcc_tagOnly_18->SetSelected(Sphericity_ZHcc_tagOnly_18);
}
