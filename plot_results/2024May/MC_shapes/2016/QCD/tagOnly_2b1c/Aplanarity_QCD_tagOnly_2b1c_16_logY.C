#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_QCD_tagOnly_2b1c_16_logY()
{
//=========Macro generated from canvas: Aplanarity_QCD_tagOnly_2b1c_16/Aplanarity_QCD_tagOnly_2b1c_16
//=========  (Thu May 23 20:49:13 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_QCD_tagOnly_2b1c_16 = new TCanvas("Aplanarity_QCD_tagOnly_2b1c_16", "Aplanarity_QCD_tagOnly_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_QCD_tagOnly_2b1c_16->SetHighLightColor(2);
   Aplanarity_QCD_tagOnly_2b1c_16->Range(-0.2,-0.4492011,1.133333,8.031294);
   Aplanarity_QCD_tagOnly_2b1c_16->SetFillColor(0);
   Aplanarity_QCD_tagOnly_2b1c_16->SetFillStyle(4000);
   Aplanarity_QCD_tagOnly_2b1c_16->SetBorderMode(0);
   Aplanarity_QCD_tagOnly_2b1c_16->SetBorderSize(2);
   Aplanarity_QCD_tagOnly_2b1c_16->SetLogy();
   Aplanarity_QCD_tagOnly_2b1c_16->SetLeftMargin(0.15);
   Aplanarity_QCD_tagOnly_2b1c_16->SetFrameFillStyle(1000);
   Aplanarity_QCD_tagOnly_2b1c_16->SetFrameBorderMode(0);
   Aplanarity_QCD_tagOnly_2b1c_16->SetFrameFillStyle(1000);
   Aplanarity_QCD_tagOnly_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_2b1c_Aplanarity__3337 = new TH1D("VH_tagOnly_2b1c_Aplanarity__3337","",50,0,1);
   VH_tagOnly_2b1c_Aplanarity__3337->SetBinContent(1,8048136);
   VH_tagOnly_2b1c_Aplanarity__3337->SetBinContent(2,1162156);
   VH_tagOnly_2b1c_Aplanarity__3337->SetBinContent(3,315007.6);
   VH_tagOnly_2b1c_Aplanarity__3337->SetBinContent(4,75344.59);
   VH_tagOnly_2b1c_Aplanarity__3337->SetBinContent(5,25475.11);
   VH_tagOnly_2b1c_Aplanarity__3337->SetBinContent(6,8827.8);
   VH_tagOnly_2b1c_Aplanarity__3337->SetBinContent(7,5945.405);
   VH_tagOnly_2b1c_Aplanarity__3337->SetBinContent(8,2166.916);
   VH_tagOnly_2b1c_Aplanarity__3337->SetBinContent(9,1797.685);
   VH_tagOnly_2b1c_Aplanarity__3337->SetBinContent(10,659.1454);
   VH_tagOnly_2b1c_Aplanarity__3337->SetBinContent(11,383.4013);
   VH_tagOnly_2b1c_Aplanarity__3337->SetBinContent(12,698.511);
   VH_tagOnly_2b1c_Aplanarity__3337->SetBinContent(13,390.5282);
   VH_tagOnly_2b1c_Aplanarity__3337->SetBinContent(14,81.46623);
   VH_tagOnly_2b1c_Aplanarity__3337->SetBinContent(15,38.90849);
   VH_tagOnly_2b1c_Aplanarity__3337->SetBinContent(16,11.76777);
   VH_tagOnly_2b1c_Aplanarity__3337->SetBinContent(17,21.95439);
   VH_tagOnly_2b1c_Aplanarity__3337->SetBinContent(18,138.6947);
   VH_tagOnly_2b1c_Aplanarity__3337->SetBinContent(20,5.01047);
   VH_tagOnly_2b1c_Aplanarity__3337->SetBinError(1,74852.14);
   VH_tagOnly_2b1c_Aplanarity__3337->SetBinError(2,33206.08);
   VH_tagOnly_2b1c_Aplanarity__3337->SetBinError(3,30014.87);
   VH_tagOnly_2b1c_Aplanarity__3337->SetBinError(4,4871.501);
   VH_tagOnly_2b1c_Aplanarity__3337->SetBinError(5,2637.191);
   VH_tagOnly_2b1c_Aplanarity__3337->SetBinError(6,1051.107);
   VH_tagOnly_2b1c_Aplanarity__3337->SetBinError(7,1285.217);
   VH_tagOnly_2b1c_Aplanarity__3337->SetBinError(8,378.1793);
   VH_tagOnly_2b1c_Aplanarity__3337->SetBinError(9,434.838);
   VH_tagOnly_2b1c_Aplanarity__3337->SetBinError(10,221.8997);
   VH_tagOnly_2b1c_Aplanarity__3337->SetBinError(11,71.31706);
   VH_tagOnly_2b1c_Aplanarity__3337->SetBinError(12,315.8428);
   VH_tagOnly_2b1c_Aplanarity__3337->SetBinError(13,211.2166);
   VH_tagOnly_2b1c_Aplanarity__3337->SetBinError(14,33.71785);
   VH_tagOnly_2b1c_Aplanarity__3337->SetBinError(15,18.05162);
   VH_tagOnly_2b1c_Aplanarity__3337->SetBinError(16,6.354164);
   VH_tagOnly_2b1c_Aplanarity__3337->SetBinError(17,11.48308);
   VH_tagOnly_2b1c_Aplanarity__3337->SetBinError(18,138.6947);
   VH_tagOnly_2b1c_Aplanarity__3337->SetBinError(20,5.01047);
   VH_tagOnly_2b1c_Aplanarity__3337->SetEntries(555840);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_2b1c_Aplanarity__3337->SetLineColor(ci);
   VH_tagOnly_2b1c_Aplanarity__3337->GetXaxis()->SetTitle("Aplanarity");
   VH_tagOnly_2b1c_Aplanarity__3337->GetXaxis()->SetRange(1,50);
   VH_tagOnly_2b1c_Aplanarity__3337->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3337->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Aplanarity__3337->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3337->GetYaxis()->SetTitle("Events/0.02");
   VH_tagOnly_2b1c_Aplanarity__3337->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3337->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_2b1c_Aplanarity__3337->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_2b1c_Aplanarity__3337->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_2b1c_Aplanarity__3337->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3337->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3337->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Aplanarity__3337->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3337->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_QCD_tagOnly_2b1c_16->Modified();
   Aplanarity_QCD_tagOnly_2b1c_16->cd();
   Aplanarity_QCD_tagOnly_2b1c_16->SetSelected(Aplanarity_QCD_tagOnly_2b1c_16);
}
