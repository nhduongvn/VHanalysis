#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_WJets_tagOnly_17_logY()
{
//=========Macro generated from canvas: Z_dR_WJets_tagOnly_17/Z_dR_WJets_tagOnly_17
//=========  (Thu May 23 20:48:37 2024) by ROOT version 6.28/10
   TCanvas *Z_dR_WJets_tagOnly_17 = new TCanvas("Z_dR_WJets_tagOnly_17", "Z_dR_WJets_tagOnly_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_WJets_tagOnly_17->SetHighLightColor(2);
   Z_dR_WJets_tagOnly_17->Range(-1.2,-1.240994,6.8,3.557225);
   Z_dR_WJets_tagOnly_17->SetFillColor(0);
   Z_dR_WJets_tagOnly_17->SetFillStyle(4000);
   Z_dR_WJets_tagOnly_17->SetBorderMode(0);
   Z_dR_WJets_tagOnly_17->SetBorderSize(2);
   Z_dR_WJets_tagOnly_17->SetLogy();
   Z_dR_WJets_tagOnly_17->SetLeftMargin(0.15);
   Z_dR_WJets_tagOnly_17->SetFrameFillStyle(1000);
   Z_dR_WJets_tagOnly_17->SetFrameBorderMode(0);
   Z_dR_WJets_tagOnly_17->SetFrameFillStyle(1000);
   Z_dR_WJets_tagOnly_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Z_dR__851 = new TH1D("VH_tagOnly_Z_dR__851","",30,0,6);
   VH_tagOnly_Z_dR__851->SetBinContent(2,0.3466232);
   VH_tagOnly_Z_dR__851->SetBinContent(3,630.7456);
   VH_tagOnly_Z_dR__851->SetBinContent(4,623.435);
   VH_tagOnly_Z_dR__851->SetBinContent(5,412.4854);
   VH_tagOnly_Z_dR__851->SetBinContent(6,326.0433);
   VH_tagOnly_Z_dR__851->SetBinContent(7,289.0896);
   VH_tagOnly_Z_dR__851->SetBinContent(8,233.742);
   VH_tagOnly_Z_dR__851->SetBinContent(9,230.6598);
   VH_tagOnly_Z_dR__851->SetBinContent(10,192.2146);
   VH_tagOnly_Z_dR__851->SetBinContent(11,228.8764);
   VH_tagOnly_Z_dR__851->SetBinContent(12,213.564);
   VH_tagOnly_Z_dR__851->SetBinContent(13,204.0338);
   VH_tagOnly_Z_dR__851->SetBinContent(14,258.9338);
   VH_tagOnly_Z_dR__851->SetBinContent(15,281.0662);
   VH_tagOnly_Z_dR__851->SetBinContent(16,293.2924);
   VH_tagOnly_Z_dR__851->SetBinContent(17,287.4342);
   VH_tagOnly_Z_dR__851->SetBinContent(18,200.0578);
   VH_tagOnly_Z_dR__851->SetBinContent(19,236.642);
   VH_tagOnly_Z_dR__851->SetBinContent(20,191.407);
   VH_tagOnly_Z_dR__851->SetBinContent(21,162.0481);
   VH_tagOnly_Z_dR__851->SetBinContent(22,127.2031);
   VH_tagOnly_Z_dR__851->SetBinContent(23,98.36542);
   VH_tagOnly_Z_dR__851->SetBinContent(24,106.027);
   VH_tagOnly_Z_dR__851->SetBinContent(25,70.50694);
   VH_tagOnly_Z_dR__851->SetBinContent(26,50.87044);
   VH_tagOnly_Z_dR__851->SetBinContent(27,66.26449);
   VH_tagOnly_Z_dR__851->SetBinContent(28,72.40938);
   VH_tagOnly_Z_dR__851->SetBinContent(29,73.83616);
   VH_tagOnly_Z_dR__851->SetBinContent(30,46.03605);
   VH_tagOnly_Z_dR__851->SetBinContent(31,32.50101);
   VH_tagOnly_Z_dR__851->SetBinError(2,0.2035217);
   VH_tagOnly_Z_dR__851->SetBinError(3,20.35464);
   VH_tagOnly_Z_dR__851->SetBinError(4,23.65682);
   VH_tagOnly_Z_dR__851->SetBinError(5,21.29834);
   VH_tagOnly_Z_dR__851->SetBinError(6,22.76272);
   VH_tagOnly_Z_dR__851->SetBinError(7,17.41805);
   VH_tagOnly_Z_dR__851->SetBinError(8,12.28591);
   VH_tagOnly_Z_dR__851->SetBinError(9,17.07092);
   VH_tagOnly_Z_dR__851->SetBinError(10,12.20337);
   VH_tagOnly_Z_dR__851->SetBinError(11,18.3436);
   VH_tagOnly_Z_dR__851->SetBinError(12,14.70215);
   VH_tagOnly_Z_dR__851->SetBinError(13,14.7171);
   VH_tagOnly_Z_dR__851->SetBinError(14,17.81505);
   VH_tagOnly_Z_dR__851->SetBinError(15,16.79728);
   VH_tagOnly_Z_dR__851->SetBinError(16,21.97222);
   VH_tagOnly_Z_dR__851->SetBinError(17,21.99603);
   VH_tagOnly_Z_dR__851->SetBinError(18,12.76657);
   VH_tagOnly_Z_dR__851->SetBinError(19,25.23268);
   VH_tagOnly_Z_dR__851->SetBinError(20,14.68949);
   VH_tagOnly_Z_dR__851->SetBinError(21,14.45879);
   VH_tagOnly_Z_dR__851->SetBinError(22,9.898254);
   VH_tagOnly_Z_dR__851->SetBinError(23,10.63208);
   VH_tagOnly_Z_dR__851->SetBinError(24,11.94853);
   VH_tagOnly_Z_dR__851->SetBinError(25,8.90091);
   VH_tagOnly_Z_dR__851->SetBinError(26,4.39973);
   VH_tagOnly_Z_dR__851->SetBinError(27,9.189703);
   VH_tagOnly_Z_dR__851->SetBinError(28,7.640411);
   VH_tagOnly_Z_dR__851->SetBinError(29,11.6959);
   VH_tagOnly_Z_dR__851->SetBinError(30,5.454016);
   VH_tagOnly_Z_dR__851->SetBinError(31,4.971);
   VH_tagOnly_Z_dR__851->SetEntries(42681);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Z_dR__851->SetLineColor(ci);
   VH_tagOnly_Z_dR__851->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VH_tagOnly_Z_dR__851->GetXaxis()->SetRange(1,30);
   VH_tagOnly_Z_dR__851->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Z_dR__851->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Z_dR__851->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Z_dR__851->GetYaxis()->SetTitle("Events/0.2");
   VH_tagOnly_Z_dR__851->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Z_dR__851->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Z_dR__851->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Z_dR__851->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Z_dR__851->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Z_dR__851->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Z_dR__851->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Z_dR__851->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Z_dR__851->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_WJets_tagOnly_17->Modified();
   Z_dR_WJets_tagOnly_17->cd();
   Z_dR_WJets_tagOnly_17->SetSelected(Z_dR_WJets_tagOnly_17);
}
