#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_ZHbb_tagFirst_2b1c_17_logY()
{
//=========Macro generated from canvas: Aplanarity_ZHbb_tagFirst_2b1c_17/Aplanarity_ZHbb_tagFirst_2b1c_17
//=========  (Thu May 23 20:49:02 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_ZHbb_tagFirst_2b1c_17 = new TCanvas("Aplanarity_ZHbb_tagFirst_2b1c_17", "Aplanarity_ZHbb_tagFirst_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_ZHbb_tagFirst_2b1c_17->SetHighLightColor(2);
   Aplanarity_ZHbb_tagFirst_2b1c_17->Range(-0.2,-4.556291,1.133333,3.362642);
   Aplanarity_ZHbb_tagFirst_2b1c_17->SetFillColor(0);
   Aplanarity_ZHbb_tagFirst_2b1c_17->SetFillStyle(4000);
   Aplanarity_ZHbb_tagFirst_2b1c_17->SetBorderMode(0);
   Aplanarity_ZHbb_tagFirst_2b1c_17->SetBorderSize(2);
   Aplanarity_ZHbb_tagFirst_2b1c_17->SetLogy();
   Aplanarity_ZHbb_tagFirst_2b1c_17->SetLeftMargin(0.15);
   Aplanarity_ZHbb_tagFirst_2b1c_17->SetFrameFillStyle(1000);
   Aplanarity_ZHbb_tagFirst_2b1c_17->SetFrameBorderMode(0);
   Aplanarity_ZHbb_tagFirst_2b1c_17->SetFrameFillStyle(1000);
   Aplanarity_ZHbb_tagFirst_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2b1c_Aplanarity__2615 = new TH1D("VH_tagFirst_2b1c_Aplanarity__2615","",50,0,1);
   VH_tagFirst_2b1c_Aplanarity__2615->SetBinContent(1,196.4265);
   VH_tagFirst_2b1c_Aplanarity__2615->SetBinContent(2,20.81434);
   VH_tagFirst_2b1c_Aplanarity__2615->SetBinContent(3,4.94204);
   VH_tagFirst_2b1c_Aplanarity__2615->SetBinContent(4,1.634578);
   VH_tagFirst_2b1c_Aplanarity__2615->SetBinContent(5,0.713154);
   VH_tagFirst_2b1c_Aplanarity__2615->SetBinContent(6,0.2891523);
   VH_tagFirst_2b1c_Aplanarity__2615->SetBinContent(7,0.2019269);
   VH_tagFirst_2b1c_Aplanarity__2615->SetBinContent(8,0.09790012);
   VH_tagFirst_2b1c_Aplanarity__2615->SetBinContent(9,0.06701603);
   VH_tagFirst_2b1c_Aplanarity__2615->SetBinContent(10,0.04429066);
   VH_tagFirst_2b1c_Aplanarity__2615->SetBinContent(11,0.01947084);
   VH_tagFirst_2b1c_Aplanarity__2615->SetBinContent(12,0.01457638);
   VH_tagFirst_2b1c_Aplanarity__2615->SetBinContent(13,0.009220455);
   VH_tagFirst_2b1c_Aplanarity__2615->SetBinContent(14,0.002518169);
   VH_tagFirst_2b1c_Aplanarity__2615->SetBinContent(15,0.00126154);
   VH_tagFirst_2b1c_Aplanarity__2615->SetBinContent(16,0.001809684);
   VH_tagFirst_2b1c_Aplanarity__2615->SetBinContent(17,0.001829198);
   VH_tagFirst_2b1c_Aplanarity__2615->SetBinContent(18,0.0003440587);
   VH_tagFirst_2b1c_Aplanarity__2615->SetBinContent(19,0.00715079);
   VH_tagFirst_2b1c_Aplanarity__2615->SetBinContent(21,0.0003700873);
   VH_tagFirst_2b1c_Aplanarity__2615->SetBinError(1,0.5311486);
   VH_tagFirst_2b1c_Aplanarity__2615->SetBinError(2,0.1683535);
   VH_tagFirst_2b1c_Aplanarity__2615->SetBinError(3,0.08281816);
   VH_tagFirst_2b1c_Aplanarity__2615->SetBinError(4,0.04794411);
   VH_tagFirst_2b1c_Aplanarity__2615->SetBinError(5,0.03072804);
   VH_tagFirst_2b1c_Aplanarity__2615->SetBinError(6,0.01895351);
   VH_tagFirst_2b1c_Aplanarity__2615->SetBinError(7,0.01652647);
   VH_tagFirst_2b1c_Aplanarity__2615->SetBinError(8,0.01016193);
   VH_tagFirst_2b1c_Aplanarity__2615->SetBinError(9,0.008571456);
   VH_tagFirst_2b1c_Aplanarity__2615->SetBinError(10,0.01040751);
   VH_tagFirst_2b1c_Aplanarity__2615->SetBinError(11,0.004081047);
   VH_tagFirst_2b1c_Aplanarity__2615->SetBinError(12,0.0033065);
   VH_tagFirst_2b1c_Aplanarity__2615->SetBinError(13,0.003032023);
   VH_tagFirst_2b1c_Aplanarity__2615->SetBinError(14,0.0009165432);
   VH_tagFirst_2b1c_Aplanarity__2615->SetBinError(15,0.0006334217);
   VH_tagFirst_2b1c_Aplanarity__2615->SetBinError(16,0.001245427);
   VH_tagFirst_2b1c_Aplanarity__2615->SetBinError(17,0.001521317);
   VH_tagFirst_2b1c_Aplanarity__2615->SetBinError(18,0.0003440587);
   VH_tagFirst_2b1c_Aplanarity__2615->SetBinError(19,0.003686018);
   VH_tagFirst_2b1c_Aplanarity__2615->SetBinError(21,0.0003700873);
   VH_tagFirst_2b1c_Aplanarity__2615->SetEntries(379757);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2b1c_Aplanarity__2615->SetLineColor(ci);
   VH_tagFirst_2b1c_Aplanarity__2615->GetXaxis()->SetTitle("Aplanarity");
   VH_tagFirst_2b1c_Aplanarity__2615->GetXaxis()->SetRange(1,50);
   VH_tagFirst_2b1c_Aplanarity__2615->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2615->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Aplanarity__2615->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2615->GetYaxis()->SetTitle("Events/0.02");
   VH_tagFirst_2b1c_Aplanarity__2615->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2615->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2b1c_Aplanarity__2615->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2b1c_Aplanarity__2615->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2b1c_Aplanarity__2615->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2615->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2615->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Aplanarity__2615->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2615->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_ZHbb_tagFirst_2b1c_17->Modified();
   Aplanarity_ZHbb_tagFirst_2b1c_17->cd();
   Aplanarity_ZHbb_tagFirst_2b1c_17->SetSelected(Aplanarity_ZHbb_tagFirst_2b1c_17);
}
