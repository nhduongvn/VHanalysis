#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_ZJets_DHZfirst_16_logY()
{
//=========Macro generated from canvas: H_dR_ZJets_DHZfirst_16/H_dR_ZJets_DHZfirst_16
//=========  (Thu May 23 20:48:47 2024) by ROOT version 6.28/10
   TCanvas *H_dR_ZJets_DHZfirst_16 = new TCanvas("H_dR_ZJets_DHZfirst_16", "H_dR_ZJets_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_ZJets_DHZfirst_16->SetHighLightColor(2);
   H_dR_ZJets_DHZfirst_16->Range(-1.24,0.2121847,7.026667,2.732766);
   H_dR_ZJets_DHZfirst_16->SetFillColor(0);
   H_dR_ZJets_DHZfirst_16->SetFillStyle(4000);
   H_dR_ZJets_DHZfirst_16->SetBorderMode(0);
   H_dR_ZJets_DHZfirst_16->SetBorderSize(2);
   H_dR_ZJets_DHZfirst_16->SetLogy();
   H_dR_ZJets_DHZfirst_16->SetLeftMargin(0.15);
   H_dR_ZJets_DHZfirst_16->SetFrameFillStyle(1000);
   H_dR_ZJets_DHZfirst_16->SetFrameBorderMode(0);
   H_dR_ZJets_DHZfirst_16->SetFrameFillStyle(1000);
   H_dR_ZJets_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_H_dR__1603 = new TH1D("VH_DHZfirst_H_dR__1603","",30,0,6);
   VH_DHZfirst_H_dR__1603->SetBinContent(3,138.7627);
   VH_DHZfirst_H_dR__1603->SetBinContent(4,159.6463);
   VH_DHZfirst_H_dR__1603->SetBinContent(5,133.4098);
   VH_DHZfirst_H_dR__1603->SetBinContent(6,123.8437);
   VH_DHZfirst_H_dR__1603->SetBinContent(7,105.003);
   VH_DHZfirst_H_dR__1603->SetBinContent(8,90.22607);
   VH_DHZfirst_H_dR__1603->SetBinContent(9,89.41894);
   VH_DHZfirst_H_dR__1603->SetBinContent(10,87.84945);
   VH_DHZfirst_H_dR__1603->SetBinContent(11,76.0112);
   VH_DHZfirst_H_dR__1603->SetBinContent(12,83.83024);
   VH_DHZfirst_H_dR__1603->SetBinContent(13,88.00455);
   VH_DHZfirst_H_dR__1603->SetBinContent(14,79.89415);
   VH_DHZfirst_H_dR__1603->SetBinContent(15,77.86604);
   VH_DHZfirst_H_dR__1603->SetBinContent(16,80.64481);
   VH_DHZfirst_H_dR__1603->SetBinContent(17,65.70261);
   VH_DHZfirst_H_dR__1603->SetBinContent(18,61.15208);
   VH_DHZfirst_H_dR__1603->SetBinContent(19,69.93388);
   VH_DHZfirst_H_dR__1603->SetBinContent(20,65.86793);
   VH_DHZfirst_H_dR__1603->SetBinContent(21,52.05925);
   VH_DHZfirst_H_dR__1603->SetBinContent(22,40.26135);
   VH_DHZfirst_H_dR__1603->SetBinContent(23,51.17188);
   VH_DHZfirst_H_dR__1603->SetBinContent(24,39.32647);
   VH_DHZfirst_H_dR__1603->SetBinContent(25,25.32537);
   VH_DHZfirst_H_dR__1603->SetBinContent(26,34.26861);
   VH_DHZfirst_H_dR__1603->SetBinContent(27,25.17767);
   VH_DHZfirst_H_dR__1603->SetBinContent(28,19.66615);
   VH_DHZfirst_H_dR__1603->SetBinContent(29,16.76829);
   VH_DHZfirst_H_dR__1603->SetBinContent(30,11.40882);
   VH_DHZfirst_H_dR__1603->SetBinContent(31,5.82469);
   VH_DHZfirst_H_dR__1603->SetBinError(3,7.142315);
   VH_DHZfirst_H_dR__1603->SetBinError(4,9.227509);
   VH_DHZfirst_H_dR__1603->SetBinError(5,8.850856);
   VH_DHZfirst_H_dR__1603->SetBinError(6,9.539667);
   VH_DHZfirst_H_dR__1603->SetBinError(7,8.819378);
   VH_DHZfirst_H_dR__1603->SetBinError(8,7.497431);
   VH_DHZfirst_H_dR__1603->SetBinError(9,7.480906);
   VH_DHZfirst_H_dR__1603->SetBinError(10,7.50484);
   VH_DHZfirst_H_dR__1603->SetBinError(11,5.247665);
   VH_DHZfirst_H_dR__1603->SetBinError(12,6.911903);
   VH_DHZfirst_H_dR__1603->SetBinError(13,6.335317);
   VH_DHZfirst_H_dR__1603->SetBinError(14,6.083982);
   VH_DHZfirst_H_dR__1603->SetBinError(15,5.771261);
   VH_DHZfirst_H_dR__1603->SetBinError(16,6.76493);
   VH_DHZfirst_H_dR__1603->SetBinError(17,4.810942);
   VH_DHZfirst_H_dR__1603->SetBinError(18,4.118343);
   VH_DHZfirst_H_dR__1603->SetBinError(19,5.777505);
   VH_DHZfirst_H_dR__1603->SetBinError(20,6.23717);
   VH_DHZfirst_H_dR__1603->SetBinError(21,4.77731);
   VH_DHZfirst_H_dR__1603->SetBinError(22,3.932834);
   VH_DHZfirst_H_dR__1603->SetBinError(23,6.38881);
   VH_DHZfirst_H_dR__1603->SetBinError(24,5.627743);
   VH_DHZfirst_H_dR__1603->SetBinError(25,2.582098);
   VH_DHZfirst_H_dR__1603->SetBinError(26,6.118826);
   VH_DHZfirst_H_dR__1603->SetBinError(27,5.047123);
   VH_DHZfirst_H_dR__1603->SetBinError(28,3.612524);
   VH_DHZfirst_H_dR__1603->SetBinError(29,3.065692);
   VH_DHZfirst_H_dR__1603->SetBinError(30,2.711172);
   VH_DHZfirst_H_dR__1603->SetBinError(31,1.834013);
   VH_DHZfirst_H_dR__1603->SetEntries(15554);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_H_dR__1603->SetLineColor(ci);
   VH_DHZfirst_H_dR__1603->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VH_DHZfirst_H_dR__1603->GetXaxis()->SetRange(1,31);
   VH_DHZfirst_H_dR__1603->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dR__1603->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_dR__1603->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dR__1603->GetYaxis()->SetTitle("Events/0.2");
   VH_DHZfirst_H_dR__1603->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dR__1603->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_H_dR__1603->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_H_dR__1603->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_H_dR__1603->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dR__1603->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dR__1603->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_dR__1603->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dR__1603->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_ZJets_DHZfirst_16->Modified();
   H_dR_ZJets_DHZfirst_16->cd();
   H_dR_ZJets_DHZfirst_16->SetSelected(H_dR_ZJets_DHZfirst_16);
}
