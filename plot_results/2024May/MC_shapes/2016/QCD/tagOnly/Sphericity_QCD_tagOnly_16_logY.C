#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_QCD_tagOnly_16_logY()
{
//=========Macro generated from canvas: Sphericity_QCD_tagOnly_16/Sphericity_QCD_tagOnly_16
//=========  (Thu May 23 20:48:41 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_QCD_tagOnly_16 = new TCanvas("Sphericity_QCD_tagOnly_16", "Sphericity_QCD_tagOnly_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_QCD_tagOnly_16->SetHighLightColor(2);
   Sphericity_QCD_tagOnly_16->Range(-0.2,-1.921559,1.133333,7.047517);
   Sphericity_QCD_tagOnly_16->SetFillColor(0);
   Sphericity_QCD_tagOnly_16->SetFillStyle(4000);
   Sphericity_QCD_tagOnly_16->SetBorderMode(0);
   Sphericity_QCD_tagOnly_16->SetBorderSize(2);
   Sphericity_QCD_tagOnly_16->SetLogy();
   Sphericity_QCD_tagOnly_16->SetLeftMargin(0.15);
   Sphericity_QCD_tagOnly_16->SetFrameFillStyle(1000);
   Sphericity_QCD_tagOnly_16->SetFrameBorderMode(0);
   Sphericity_QCD_tagOnly_16->SetFrameFillStyle(1000);
   Sphericity_QCD_tagOnly_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Sphericity__1147 = new TH1D("VH_tagOnly_Sphericity__1147","",25,0,1);
   VH_tagOnly_Sphericity__1147->SetBinContent(1,746552.4);
   VH_tagOnly_Sphericity__1147->SetBinContent(2,640037.8);
   VH_tagOnly_Sphericity__1147->SetBinContent(3,363950.1);
   VH_tagOnly_Sphericity__1147->SetBinContent(4,226794.1);
   VH_tagOnly_Sphericity__1147->SetBinContent(5,100302.7);
   VH_tagOnly_Sphericity__1147->SetBinContent(6,55339.24);
   VH_tagOnly_Sphericity__1147->SetBinContent(7,23072.91);
   VH_tagOnly_Sphericity__1147->SetBinContent(8,12877.98);
   VH_tagOnly_Sphericity__1147->SetBinContent(9,9402.394);
   VH_tagOnly_Sphericity__1147->SetBinContent(10,6701.307);
   VH_tagOnly_Sphericity__1147->SetBinContent(11,2847.545);
   VH_tagOnly_Sphericity__1147->SetBinContent(12,3065.719);
   VH_tagOnly_Sphericity__1147->SetBinContent(13,3156.433);
   VH_tagOnly_Sphericity__1147->SetBinContent(14,1840.622);
   VH_tagOnly_Sphericity__1147->SetBinContent(15,1297.282);
   VH_tagOnly_Sphericity__1147->SetBinContent(16,1446.388);
   VH_tagOnly_Sphericity__1147->SetBinContent(17,522.014);
   VH_tagOnly_Sphericity__1147->SetBinContent(18,608.9633);
   VH_tagOnly_Sphericity__1147->SetBinContent(19,170.8743);
   VH_tagOnly_Sphericity__1147->SetBinContent(20,74.5738);
   VH_tagOnly_Sphericity__1147->SetBinContent(21,10.15415);
   VH_tagOnly_Sphericity__1147->SetBinContent(22,0.1889639);
   VH_tagOnly_Sphericity__1147->SetBinError(1,12161.06);
   VH_tagOnly_Sphericity__1147->SetBinError(2,19728.07);
   VH_tagOnly_Sphericity__1147->SetBinError(3,9258.523);
   VH_tagOnly_Sphericity__1147->SetBinError(4,22414.06);
   VH_tagOnly_Sphericity__1147->SetBinError(5,4251.368);
   VH_tagOnly_Sphericity__1147->SetBinError(6,3223.748);
   VH_tagOnly_Sphericity__1147->SetBinError(7,1718.566);
   VH_tagOnly_Sphericity__1147->SetBinError(8,1512.535);
   VH_tagOnly_Sphericity__1147->SetBinError(9,950.4357);
   VH_tagOnly_Sphericity__1147->SetBinError(10,930.2312);
   VH_tagOnly_Sphericity__1147->SetBinError(11,344.0828);
   VH_tagOnly_Sphericity__1147->SetBinError(12,386.1436);
   VH_tagOnly_Sphericity__1147->SetBinError(13,573.8275);
   VH_tagOnly_Sphericity__1147->SetBinError(14,321.8026);
   VH_tagOnly_Sphericity__1147->SetBinError(15,292.3857);
   VH_tagOnly_Sphericity__1147->SetBinError(16,406.0005);
   VH_tagOnly_Sphericity__1147->SetBinError(17,76.73121);
   VH_tagOnly_Sphericity__1147->SetBinError(18,233.0122);
   VH_tagOnly_Sphericity__1147->SetBinError(19,40.91319);
   VH_tagOnly_Sphericity__1147->SetBinError(20,26.73465);
   VH_tagOnly_Sphericity__1147->SetBinError(21,6.967112);
   VH_tagOnly_Sphericity__1147->SetBinError(22,0.1889639);
   VH_tagOnly_Sphericity__1147->SetEntries(176350);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Sphericity__1147->SetLineColor(ci);
   VH_tagOnly_Sphericity__1147->GetXaxis()->SetTitle("Sphericity");
   VH_tagOnly_Sphericity__1147->GetXaxis()->SetRange(1,25);
   VH_tagOnly_Sphericity__1147->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1147->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Sphericity__1147->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1147->GetYaxis()->SetTitle("Events/0.04");
   VH_tagOnly_Sphericity__1147->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1147->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Sphericity__1147->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Sphericity__1147->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Sphericity__1147->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1147->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1147->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Sphericity__1147->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1147->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_QCD_tagOnly_16->Modified();
   Sphericity_QCD_tagOnly_16->cd();
   Sphericity_QCD_tagOnly_16->SetSelected(Sphericity_QCD_tagOnly_16);
}
