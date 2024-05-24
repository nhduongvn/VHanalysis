#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_SingleTop_tagOnly_16()
{
//=========Macro generated from canvas: Sphericity_SingleTop_tagOnly_16/Sphericity_SingleTop_tagOnly_16
//=========  (Fri May 24 12:42:21 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_SingleTop_tagOnly_16 = new TCanvas("Sphericity_SingleTop_tagOnly_16", "Sphericity_SingleTop_tagOnly_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_SingleTop_tagOnly_16->SetHighLightColor(2);
   Sphericity_SingleTop_tagOnly_16->Range(-0.2,-1047.212,1.133333,9424.907);
   Sphericity_SingleTop_tagOnly_16->SetFillColor(0);
   Sphericity_SingleTop_tagOnly_16->SetFillStyle(4000);
   Sphericity_SingleTop_tagOnly_16->SetBorderMode(0);
   Sphericity_SingleTop_tagOnly_16->SetBorderSize(2);
   Sphericity_SingleTop_tagOnly_16->SetLeftMargin(0.15);
   Sphericity_SingleTop_tagOnly_16->SetFrameFillStyle(1000);
   Sphericity_SingleTop_tagOnly_16->SetFrameBorderMode(0);
   Sphericity_SingleTop_tagOnly_16->SetFrameFillStyle(1000);
   Sphericity_SingleTop_tagOnly_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Sphericity__1159 = new TH1D("VH_tagOnly_Sphericity__1159","",25,0,1);
   VH_tagOnly_Sphericity__1159->SetBinContent(1,7978.757);
   VH_tagOnly_Sphericity__1159->SetBinContent(2,6861.919);
   VH_tagOnly_Sphericity__1159->SetBinContent(3,4001.975);
   VH_tagOnly_Sphericity__1159->SetBinContent(4,2291.305);
   VH_tagOnly_Sphericity__1159->SetBinContent(5,1289.492);
   VH_tagOnly_Sphericity__1159->SetBinContent(6,707.7353);
   VH_tagOnly_Sphericity__1159->SetBinContent(7,353.6802);
   VH_tagOnly_Sphericity__1159->SetBinContent(8,204.1216);
   VH_tagOnly_Sphericity__1159->SetBinContent(9,136.7887);
   VH_tagOnly_Sphericity__1159->SetBinContent(10,90.71321);
   VH_tagOnly_Sphericity__1159->SetBinContent(11,60.08498);
   VH_tagOnly_Sphericity__1159->SetBinContent(12,43.02682);
   VH_tagOnly_Sphericity__1159->SetBinContent(13,35.14441);
   VH_tagOnly_Sphericity__1159->SetBinContent(14,24.67599);
   VH_tagOnly_Sphericity__1159->SetBinContent(15,21.08843);
   VH_tagOnly_Sphericity__1159->SetBinContent(16,13.45886);
   VH_tagOnly_Sphericity__1159->SetBinContent(17,10.23805);
   VH_tagOnly_Sphericity__1159->SetBinContent(18,6.514875);
   VH_tagOnly_Sphericity__1159->SetBinContent(19,5.211947);
   VH_tagOnly_Sphericity__1159->SetBinContent(20,1.079541);
   VH_tagOnly_Sphericity__1159->SetBinContent(21,1.025842);
   VH_tagOnly_Sphericity__1159->SetBinContent(22,0.06819442);
   VH_tagOnly_Sphericity__1159->SetBinContent(23,0.2521655);
   VH_tagOnly_Sphericity__1159->SetBinError(1,33.00273);
   VH_tagOnly_Sphericity__1159->SetBinError(2,30.06916);
   VH_tagOnly_Sphericity__1159->SetBinError(3,23.24099);
   VH_tagOnly_Sphericity__1159->SetBinError(4,17.91707);
   VH_tagOnly_Sphericity__1159->SetBinError(5,13.68119);
   VH_tagOnly_Sphericity__1159->SetBinError(6,10.27107);
   VH_tagOnly_Sphericity__1159->SetBinError(7,7.283363);
   VH_tagOnly_Sphericity__1159->SetBinError(8,5.534808);
   VH_tagOnly_Sphericity__1159->SetBinError(9,4.660604);
   VH_tagOnly_Sphericity__1159->SetBinError(10,3.754815);
   VH_tagOnly_Sphericity__1159->SetBinError(11,3.086125);
   VH_tagOnly_Sphericity__1159->SetBinError(12,2.585248);
   VH_tagOnly_Sphericity__1159->SetBinError(13,2.361266);
   VH_tagOnly_Sphericity__1159->SetBinError(14,1.98192);
   VH_tagOnly_Sphericity__1159->SetBinError(15,1.81966);
   VH_tagOnly_Sphericity__1159->SetBinError(16,1.468224);
   VH_tagOnly_Sphericity__1159->SetBinError(17,1.30444);
   VH_tagOnly_Sphericity__1159->SetBinError(18,0.9213855);
   VH_tagOnly_Sphericity__1159->SetBinError(19,0.9349378);
   VH_tagOnly_Sphericity__1159->SetBinError(20,0.3211091);
   VH_tagOnly_Sphericity__1159->SetBinError(21,0.4729172);
   VH_tagOnly_Sphericity__1159->SetBinError(22,0.04833962);
   VH_tagOnly_Sphericity__1159->SetBinError(23,0.2186029);
   VH_tagOnly_Sphericity__1159->SetEntries(390931);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Sphericity__1159->SetLineColor(ci);
   VH_tagOnly_Sphericity__1159->GetXaxis()->SetTitle("Sphericity");
   VH_tagOnly_Sphericity__1159->GetXaxis()->SetRange(1,25);
   VH_tagOnly_Sphericity__1159->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1159->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Sphericity__1159->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1159->GetYaxis()->SetTitle("Events/0.04");
   VH_tagOnly_Sphericity__1159->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1159->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Sphericity__1159->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Sphericity__1159->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Sphericity__1159->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1159->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1159->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Sphericity__1159->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1159->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_SingleTop_tagOnly_16->Modified();
   Sphericity_SingleTop_tagOnly_16->cd();
   Sphericity_SingleTop_tagOnly_16->SetSelected(Sphericity_SingleTop_tagOnly_16);
}
