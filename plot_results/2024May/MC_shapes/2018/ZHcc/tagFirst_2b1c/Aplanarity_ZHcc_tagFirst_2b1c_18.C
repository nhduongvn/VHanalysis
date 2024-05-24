#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_ZHcc_tagFirst_2b1c_18()
{
//=========Macro generated from canvas: Aplanarity_ZHcc_tagFirst_2b1c_18/Aplanarity_ZHcc_tagFirst_2b1c_18
//=========  (Fri May 24 12:42:43 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_ZHcc_tagFirst_2b1c_18 = new TCanvas("Aplanarity_ZHcc_tagFirst_2b1c_18", "Aplanarity_ZHcc_tagFirst_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_ZHcc_tagFirst_2b1c_18->SetHighLightColor(2);
   Aplanarity_ZHcc_tagFirst_2b1c_18->Range(-0.2,-0.7909613,1.133333,7.118651);
   Aplanarity_ZHcc_tagFirst_2b1c_18->SetFillColor(0);
   Aplanarity_ZHcc_tagFirst_2b1c_18->SetFillStyle(4000);
   Aplanarity_ZHcc_tagFirst_2b1c_18->SetBorderMode(0);
   Aplanarity_ZHcc_tagFirst_2b1c_18->SetBorderSize(2);
   Aplanarity_ZHcc_tagFirst_2b1c_18->SetLeftMargin(0.15);
   Aplanarity_ZHcc_tagFirst_2b1c_18->SetFrameFillStyle(1000);
   Aplanarity_ZHcc_tagFirst_2b1c_18->SetFrameBorderMode(0);
   Aplanarity_ZHcc_tagFirst_2b1c_18->SetFrameFillStyle(1000);
   Aplanarity_ZHcc_tagFirst_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2b1c_Aplanarity__2613 = new TH1D("VH_tagFirst_2b1c_Aplanarity__2613","",50,0,1);
   VH_tagFirst_2b1c_Aplanarity__2613->SetBinContent(1,6.026371);
   VH_tagFirst_2b1c_Aplanarity__2613->SetBinContent(2,0.5139788);
   VH_tagFirst_2b1c_Aplanarity__2613->SetBinContent(3,0.125988);
   VH_tagFirst_2b1c_Aplanarity__2613->SetBinContent(4,0.02266743);
   VH_tagFirst_2b1c_Aplanarity__2613->SetBinContent(5,0.01341592);
   VH_tagFirst_2b1c_Aplanarity__2613->SetBinContent(6,0.002649928);
   VH_tagFirst_2b1c_Aplanarity__2613->SetBinContent(7,0.009026189);
   VH_tagFirst_2b1c_Aplanarity__2613->SetBinContent(8,0.007121103);
   VH_tagFirst_2b1c_Aplanarity__2613->SetBinContent(9,0.001000361);
   VH_tagFirst_2b1c_Aplanarity__2613->SetBinContent(10,0.0008107704);
   VH_tagFirst_2b1c_Aplanarity__2613->SetBinContent(12,0.0007021084);
   VH_tagFirst_2b1c_Aplanarity__2613->SetBinContent(14,0.001357012);
   VH_tagFirst_2b1c_Aplanarity__2613->SetBinError(1,0.1254697);
   VH_tagFirst_2b1c_Aplanarity__2613->SetBinError(2,0.03187811);
   VH_tagFirst_2b1c_Aplanarity__2613->SetBinError(3,0.01895959);
   VH_tagFirst_2b1c_Aplanarity__2613->SetBinError(4,0.006850587);
   VH_tagFirst_2b1c_Aplanarity__2613->SetBinError(5,0.005073703);
   VH_tagFirst_2b1c_Aplanarity__2613->SetBinError(6,0.001102506);
   VH_tagFirst_2b1c_Aplanarity__2613->SetBinError(7,0.004461536);
   VH_tagFirst_2b1c_Aplanarity__2613->SetBinError(8,0.005428576);
   VH_tagFirst_2b1c_Aplanarity__2613->SetBinError(9,0.0005794773);
   VH_tagFirst_2b1c_Aplanarity__2613->SetBinError(10,0.0008107704);
   VH_tagFirst_2b1c_Aplanarity__2613->SetBinError(12,0.0004964887);
   VH_tagFirst_2b1c_Aplanarity__2613->SetBinError(14,0.0008122958);
   VH_tagFirst_2b1c_Aplanarity__2613->SetEntries(7112);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2b1c_Aplanarity__2613->SetLineColor(ci);
   VH_tagFirst_2b1c_Aplanarity__2613->GetXaxis()->SetTitle("Aplanarity");
   VH_tagFirst_2b1c_Aplanarity__2613->GetXaxis()->SetRange(1,50);
   VH_tagFirst_2b1c_Aplanarity__2613->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2613->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Aplanarity__2613->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2613->GetYaxis()->SetTitle("Events/0.02");
   VH_tagFirst_2b1c_Aplanarity__2613->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2613->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2b1c_Aplanarity__2613->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2b1c_Aplanarity__2613->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2b1c_Aplanarity__2613->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2613->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2613->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Aplanarity__2613->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2613->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_ZHcc_tagFirst_2b1c_18->Modified();
   Aplanarity_ZHcc_tagFirst_2b1c_18->cd();
   Aplanarity_ZHcc_tagFirst_2b1c_18->SetSelected(Aplanarity_ZHcc_tagFirst_2b1c_18);
}
