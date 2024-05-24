#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_SingleTop_tagFirst_16_logY()
{
//=========Macro generated from canvas: Aplanarity_SingleTop_tagFirst_16/Aplanarity_SingleTop_tagFirst_16
//=========  (Thu May 23 20:48:32 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_SingleTop_tagFirst_16 = new TCanvas("Aplanarity_SingleTop_tagFirst_16", "Aplanarity_SingleTop_tagFirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_SingleTop_tagFirst_16->SetHighLightColor(2);
   Aplanarity_SingleTop_tagFirst_16->Range(-0.2,-2.211074,1.133333,5.348566);
   Aplanarity_SingleTop_tagFirst_16->SetFillColor(0);
   Aplanarity_SingleTop_tagFirst_16->SetFillStyle(4000);
   Aplanarity_SingleTop_tagFirst_16->SetBorderMode(0);
   Aplanarity_SingleTop_tagFirst_16->SetBorderSize(2);
   Aplanarity_SingleTop_tagFirst_16->SetLogy();
   Aplanarity_SingleTop_tagFirst_16->SetLeftMargin(0.15);
   Aplanarity_SingleTop_tagFirst_16->SetFrameFillStyle(1000);
   Aplanarity_SingleTop_tagFirst_16->SetFrameBorderMode(0);
   Aplanarity_SingleTop_tagFirst_16->SetFrameFillStyle(1000);
   Aplanarity_SingleTop_tagFirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Aplanarity__469 = new TH1D("VH_tagFirst_Aplanarity__469","",50,0,1);
   VH_tagFirst_Aplanarity__469->SetBinContent(1,20656.31);
   VH_tagFirst_Aplanarity__469->SetBinContent(2,2974.295);
   VH_tagFirst_Aplanarity__469->SetBinContent(3,768.843);
   VH_tagFirst_Aplanarity__469->SetBinContent(4,260.2894);
   VH_tagFirst_Aplanarity__469->SetBinContent(5,97.95045);
   VH_tagFirst_Aplanarity__469->SetBinContent(6,50.37636);
   VH_tagFirst_Aplanarity__469->SetBinContent(7,28.33126);
   VH_tagFirst_Aplanarity__469->SetBinContent(8,14.08162);
   VH_tagFirst_Aplanarity__469->SetBinContent(9,10.2769);
   VH_tagFirst_Aplanarity__469->SetBinContent(10,7.355322);
   VH_tagFirst_Aplanarity__469->SetBinContent(11,3.89097);
   VH_tagFirst_Aplanarity__469->SetBinContent(12,1.550046);
   VH_tagFirst_Aplanarity__469->SetBinContent(13,1.914061);
   VH_tagFirst_Aplanarity__469->SetBinContent(14,0.997239);
   VH_tagFirst_Aplanarity__469->SetBinContent(15,0.9766154);
   VH_tagFirst_Aplanarity__469->SetBinContent(16,0.3739054);
   VH_tagFirst_Aplanarity__469->SetBinContent(17,0.1106258);
   VH_tagFirst_Aplanarity__469->SetBinContent(18,0.4991102);
   VH_tagFirst_Aplanarity__469->SetBinContent(19,0.0701326);
   VH_tagFirst_Aplanarity__469->SetBinContent(20,0.3759491);
   VH_tagFirst_Aplanarity__469->SetBinError(1,53.34912);
   VH_tagFirst_Aplanarity__469->SetBinError(2,19.97941);
   VH_tagFirst_Aplanarity__469->SetBinError(3,10.26819);
   VH_tagFirst_Aplanarity__469->SetBinError(4,5.999681);
   VH_tagFirst_Aplanarity__469->SetBinError(5,3.625577);
   VH_tagFirst_Aplanarity__469->SetBinError(6,2.793538);
   VH_tagFirst_Aplanarity__469->SetBinError(7,2.097521);
   VH_tagFirst_Aplanarity__469->SetBinError(8,1.401901);
   VH_tagFirst_Aplanarity__469->SetBinError(9,1.252526);
   VH_tagFirst_Aplanarity__469->SetBinError(10,1.122564);
   VH_tagFirst_Aplanarity__469->SetBinError(11,0.7366734);
   VH_tagFirst_Aplanarity__469->SetBinError(12,0.3975639);
   VH_tagFirst_Aplanarity__469->SetBinError(13,0.492443);
   VH_tagFirst_Aplanarity__469->SetBinError(14,0.397236);
   VH_tagFirst_Aplanarity__469->SetBinError(15,0.4469969);
   VH_tagFirst_Aplanarity__469->SetBinError(16,0.2202026);
   VH_tagFirst_Aplanarity__469->SetBinError(17,0.06493686);
   VH_tagFirst_Aplanarity__469->SetBinError(18,0.3561938);
   VH_tagFirst_Aplanarity__469->SetBinError(19,0.04981902);
   VH_tagFirst_Aplanarity__469->SetBinError(20,0.3071843);
   VH_tagFirst_Aplanarity__469->SetEntries(401408);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity__469->SetLineColor(ci);
   VH_tagFirst_Aplanarity__469->GetXaxis()->SetTitle("Aplanarity");
   VH_tagFirst_Aplanarity__469->GetXaxis()->SetRange(1,50);
   VH_tagFirst_Aplanarity__469->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__469->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__469->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__469->GetYaxis()->SetTitle("Events/0.02");
   VH_tagFirst_Aplanarity__469->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__469->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Aplanarity__469->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Aplanarity__469->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Aplanarity__469->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__469->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__469->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__469->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__469->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_SingleTop_tagFirst_16->Modified();
   Aplanarity_SingleTop_tagFirst_16->cd();
   Aplanarity_SingleTop_tagFirst_16->SetSelected(Aplanarity_SingleTop_tagFirst_16);
}
