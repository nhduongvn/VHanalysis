#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_QCD_tagOnly_18()
{
//=========Macro generated from canvas: Aplanarity_QCD_tagOnly_18/Aplanarity_QCD_tagOnly_18
//=========  (Fri May 24 12:42:21 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_QCD_tagOnly_18 = new TCanvas("Aplanarity_QCD_tagOnly_18", "Aplanarity_QCD_tagOnly_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_QCD_tagOnly_18->SetHighLightColor(2);
   Aplanarity_QCD_tagOnly_18->Range(-0.2,-283572.9,1.133333,2552156);
   Aplanarity_QCD_tagOnly_18->SetFillColor(0);
   Aplanarity_QCD_tagOnly_18->SetFillStyle(4000);
   Aplanarity_QCD_tagOnly_18->SetBorderMode(0);
   Aplanarity_QCD_tagOnly_18->SetBorderSize(2);
   Aplanarity_QCD_tagOnly_18->SetLeftMargin(0.15);
   Aplanarity_QCD_tagOnly_18->SetFrameFillStyle(1000);
   Aplanarity_QCD_tagOnly_18->SetFrameBorderMode(0);
   Aplanarity_QCD_tagOnly_18->SetFrameFillStyle(1000);
   Aplanarity_QCD_tagOnly_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Aplanarity__1179 = new TH1D("VH_tagOnly_Aplanarity__1179","",50,0,1);
   VH_tagOnly_Aplanarity__1179->SetBinContent(1,2160555);
   VH_tagOnly_Aplanarity__1179->SetBinContent(2,271727);
   VH_tagOnly_Aplanarity__1179->SetBinContent(3,67203.14);
   VH_tagOnly_Aplanarity__1179->SetBinContent(4,21326.15);
   VH_tagOnly_Aplanarity__1179->SetBinContent(5,9400.908);
   VH_tagOnly_Aplanarity__1179->SetBinContent(6,4129.923);
   VH_tagOnly_Aplanarity__1179->SetBinContent(7,1098.51);
   VH_tagOnly_Aplanarity__1179->SetBinContent(8,5752.137);
   VH_tagOnly_Aplanarity__1179->SetBinContent(9,1033.462);
   VH_tagOnly_Aplanarity__1179->SetBinContent(10,335.6265);
   VH_tagOnly_Aplanarity__1179->SetBinContent(11,120.5001);
   VH_tagOnly_Aplanarity__1179->SetBinContent(12,95.44002);
   VH_tagOnly_Aplanarity__1179->SetBinContent(13,793.7312);
   VH_tagOnly_Aplanarity__1179->SetBinContent(14,57.70866);
   VH_tagOnly_Aplanarity__1179->SetBinContent(15,14.53589);
   VH_tagOnly_Aplanarity__1179->SetBinContent(17,54.67183);
   VH_tagOnly_Aplanarity__1179->SetBinError(1,41903.49);
   VH_tagOnly_Aplanarity__1179->SetBinError(2,12311.96);
   VH_tagOnly_Aplanarity__1179->SetBinError(3,6206.731);
   VH_tagOnly_Aplanarity__1179->SetBinError(4,2742.526);
   VH_tagOnly_Aplanarity__1179->SetBinError(5,2519.309);
   VH_tagOnly_Aplanarity__1179->SetBinError(6,1038.969);
   VH_tagOnly_Aplanarity__1179->SetBinError(7,232.9561);
   VH_tagOnly_Aplanarity__1179->SetBinError(8,3890.671);
   VH_tagOnly_Aplanarity__1179->SetBinError(9,478.4708);
   VH_tagOnly_Aplanarity__1179->SetBinError(10,136.689);
   VH_tagOnly_Aplanarity__1179->SetBinError(11,52.27538);
   VH_tagOnly_Aplanarity__1179->SetBinError(12,39.69113);
   VH_tagOnly_Aplanarity__1179->SetBinError(13,746.524);
   VH_tagOnly_Aplanarity__1179->SetBinError(14,36.23564);
   VH_tagOnly_Aplanarity__1179->SetBinError(15,14.53589);
   VH_tagOnly_Aplanarity__1179->SetBinError(17,54.67183);
   VH_tagOnly_Aplanarity__1179->SetEntries(92465);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity__1179->SetLineColor(ci);
   VH_tagOnly_Aplanarity__1179->GetXaxis()->SetTitle("Aplanarity");
   VH_tagOnly_Aplanarity__1179->GetXaxis()->SetRange(1,50);
   VH_tagOnly_Aplanarity__1179->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1179->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__1179->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1179->GetYaxis()->SetTitle("Events/0.02");
   VH_tagOnly_Aplanarity__1179->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1179->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Aplanarity__1179->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Aplanarity__1179->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Aplanarity__1179->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1179->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1179->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__1179->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1179->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_QCD_tagOnly_18->Modified();
   Aplanarity_QCD_tagOnly_18->cd();
   Aplanarity_QCD_tagOnly_18->SetSelected(Aplanarity_QCD_tagOnly_18);
}
