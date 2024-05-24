#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_WZ_tagFirst_2b1c_16_logY()
{
//=========Macro generated from canvas: Aplanarity_WZ_tagFirst_2b1c_16/Aplanarity_WZ_tagFirst_2b1c_16
//=========  (Thu May 23 20:49:02 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_WZ_tagFirst_2b1c_16 = new TCanvas("Aplanarity_WZ_tagFirst_2b1c_16", "Aplanarity_WZ_tagFirst_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_WZ_tagFirst_2b1c_16->SetHighLightColor(2);
   Aplanarity_WZ_tagFirst_2b1c_16->Range(-0.2,-1.950905,1.133333,3.540112);
   Aplanarity_WZ_tagFirst_2b1c_16->SetFillColor(0);
   Aplanarity_WZ_tagFirst_2b1c_16->SetFillStyle(4000);
   Aplanarity_WZ_tagFirst_2b1c_16->SetBorderMode(0);
   Aplanarity_WZ_tagFirst_2b1c_16->SetBorderSize(2);
   Aplanarity_WZ_tagFirst_2b1c_16->SetLogy();
   Aplanarity_WZ_tagFirst_2b1c_16->SetLeftMargin(0.15);
   Aplanarity_WZ_tagFirst_2b1c_16->SetFrameFillStyle(1000);
   Aplanarity_WZ_tagFirst_2b1c_16->SetFrameBorderMode(0);
   Aplanarity_WZ_tagFirst_2b1c_16->SetFrameFillStyle(1000);
   Aplanarity_WZ_tagFirst_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2b1c_Aplanarity__2635 = new TH1D("VH_tagFirst_2b1c_Aplanarity__2635","",50,0,1);
   VH_tagFirst_2b1c_Aplanarity__2635->SetBinContent(1,516.9655);
   VH_tagFirst_2b1c_Aplanarity__2635->SetBinContent(2,56.57743);
   VH_tagFirst_2b1c_Aplanarity__2635->SetBinContent(3,11.98119);
   VH_tagFirst_2b1c_Aplanarity__2635->SetBinContent(4,4.683343);
   VH_tagFirst_2b1c_Aplanarity__2635->SetBinContent(5,1.917429);
   VH_tagFirst_2b1c_Aplanarity__2635->SetBinContent(6,1.3372);
   VH_tagFirst_2b1c_Aplanarity__2635->SetBinContent(7,0.4962727);
   VH_tagFirst_2b1c_Aplanarity__2635->SetBinContent(8,0.3771674);
   VH_tagFirst_2b1c_Aplanarity__2635->SetBinContent(9,0.1048271);
   VH_tagFirst_2b1c_Aplanarity__2635->SetBinContent(15,0.07929153);
   VH_tagFirst_2b1c_Aplanarity__2635->SetBinError(1,6.940208);
   VH_tagFirst_2b1c_Aplanarity__2635->SetBinError(2,2.264589);
   VH_tagFirst_2b1c_Aplanarity__2635->SetBinError(3,1.038445);
   VH_tagFirst_2b1c_Aplanarity__2635->SetBinError(4,0.6662941);
   VH_tagFirst_2b1c_Aplanarity__2635->SetBinError(5,0.4294332);
   VH_tagFirst_2b1c_Aplanarity__2635->SetBinError(6,0.3632918);
   VH_tagFirst_2b1c_Aplanarity__2635->SetBinError(7,0.2069564);
   VH_tagFirst_2b1c_Aplanarity__2635->SetBinError(8,0.191201);
   VH_tagFirst_2b1c_Aplanarity__2635->SetBinError(9,0.1048271);
   VH_tagFirst_2b1c_Aplanarity__2635->SetBinError(15,0.07929153);
   VH_tagFirst_2b1c_Aplanarity__2635->SetEntries(6672);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2b1c_Aplanarity__2635->SetLineColor(ci);
   VH_tagFirst_2b1c_Aplanarity__2635->GetXaxis()->SetTitle("Aplanarity");
   VH_tagFirst_2b1c_Aplanarity__2635->GetXaxis()->SetRange(1,50);
   VH_tagFirst_2b1c_Aplanarity__2635->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2635->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Aplanarity__2635->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2635->GetYaxis()->SetTitle("Events/0.02");
   VH_tagFirst_2b1c_Aplanarity__2635->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2635->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2b1c_Aplanarity__2635->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2b1c_Aplanarity__2635->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2b1c_Aplanarity__2635->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2635->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2635->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Aplanarity__2635->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2635->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_WZ_tagFirst_2b1c_16->Modified();
   Aplanarity_WZ_tagFirst_2b1c_16->cd();
   Aplanarity_WZ_tagFirst_2b1c_16->SetSelected(Aplanarity_WZ_tagFirst_2b1c_16);
}
