#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_WJets_tagFirst_16_logY()
{
//=========Macro generated from canvas: Z_dR_WJets_tagFirst_16/Z_dR_WJets_tagFirst_16
//=========  (Thu May 23 20:48:28 2024) by ROOT version 6.28/10
   TCanvas *Z_dR_WJets_tagFirst_16 = new TCanvas("Z_dR_WJets_tagFirst_16", "Z_dR_WJets_tagFirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_WJets_tagFirst_16->SetHighLightColor(2);
   Z_dR_WJets_tagFirst_16->Range(-1.2,-1.017981,6.8,3.783606);
   Z_dR_WJets_tagFirst_16->SetFillColor(0);
   Z_dR_WJets_tagFirst_16->SetFillStyle(4000);
   Z_dR_WJets_tagFirst_16->SetBorderMode(0);
   Z_dR_WJets_tagFirst_16->SetBorderSize(2);
   Z_dR_WJets_tagFirst_16->SetLogy();
   Z_dR_WJets_tagFirst_16->SetLeftMargin(0.15);
   Z_dR_WJets_tagFirst_16->SetFrameFillStyle(1000);
   Z_dR_WJets_tagFirst_16->SetFrameBorderMode(0);
   Z_dR_WJets_tagFirst_16->SetFrameFillStyle(1000);
   Z_dR_WJets_tagFirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Z_dR__130 = new TH1D("VH_tagFirst_Z_dR__130","",30,0,6);
   VH_tagFirst_Z_dR__130->SetBinContent(2,0.5797065);
   VH_tagFirst_Z_dR__130->SetBinContent(3,1061.447);
   VH_tagFirst_Z_dR__130->SetBinContent(4,950.1419);
   VH_tagFirst_Z_dR__130->SetBinContent(5,628.2789);
   VH_tagFirst_Z_dR__130->SetBinContent(6,547.7972);
   VH_tagFirst_Z_dR__130->SetBinContent(7,447.7872);
   VH_tagFirst_Z_dR__130->SetBinContent(8,404.4929);
   VH_tagFirst_Z_dR__130->SetBinContent(9,349.1267);
   VH_tagFirst_Z_dR__130->SetBinContent(10,377.2483);
   VH_tagFirst_Z_dR__130->SetBinContent(11,360.4008);
   VH_tagFirst_Z_dR__130->SetBinContent(12,361.5536);
   VH_tagFirst_Z_dR__130->SetBinContent(13,393.6436);
   VH_tagFirst_Z_dR__130->SetBinContent(14,437.7464);
   VH_tagFirst_Z_dR__130->SetBinContent(15,492.5339);
   VH_tagFirst_Z_dR__130->SetBinContent(16,498.5951);
   VH_tagFirst_Z_dR__130->SetBinContent(17,472.0067);
   VH_tagFirst_Z_dR__130->SetBinContent(18,423.7433);
   VH_tagFirst_Z_dR__130->SetBinContent(19,396.6599);
   VH_tagFirst_Z_dR__130->SetBinContent(20,329.7074);
   VH_tagFirst_Z_dR__130->SetBinContent(21,271.6855);
   VH_tagFirst_Z_dR__130->SetBinContent(22,221.8958);
   VH_tagFirst_Z_dR__130->SetBinContent(23,168.9633);
   VH_tagFirst_Z_dR__130->SetBinContent(24,144.5198);
   VH_tagFirst_Z_dR__130->SetBinContent(25,136.3569);
   VH_tagFirst_Z_dR__130->SetBinContent(26,116.5314);
   VH_tagFirst_Z_dR__130->SetBinContent(27,110.0258);
   VH_tagFirst_Z_dR__130->SetBinContent(28,90.23021);
   VH_tagFirst_Z_dR__130->SetBinContent(29,96.89865);
   VH_tagFirst_Z_dR__130->SetBinContent(30,60.24723);
   VH_tagFirst_Z_dR__130->SetBinContent(31,51.72363);
   VH_tagFirst_Z_dR__130->SetBinError(2,0.2375657);
   VH_tagFirst_Z_dR__130->SetBinError(3,29.42274);
   VH_tagFirst_Z_dR__130->SetBinError(4,28.8529);
   VH_tagFirst_Z_dR__130->SetBinError(5,19.67397);
   VH_tagFirst_Z_dR__130->SetBinError(6,23.70219);
   VH_tagFirst_Z_dR__130->SetBinError(7,22.57344);
   VH_tagFirst_Z_dR__130->SetBinError(8,19.41589);
   VH_tagFirst_Z_dR__130->SetBinError(9,16.61207);
   VH_tagFirst_Z_dR__130->SetBinError(10,21.88043);
   VH_tagFirst_Z_dR__130->SetBinError(11,18.77014);
   VH_tagFirst_Z_dR__130->SetBinError(12,18.25096);
   VH_tagFirst_Z_dR__130->SetBinError(13,20.21327);
   VH_tagFirst_Z_dR__130->SetBinError(14,20.22103);
   VH_tagFirst_Z_dR__130->SetBinError(15,23.63428);
   VH_tagFirst_Z_dR__130->SetBinError(16,24.29633);
   VH_tagFirst_Z_dR__130->SetBinError(17,20.45921);
   VH_tagFirst_Z_dR__130->SetBinError(18,19.73184);
   VH_tagFirst_Z_dR__130->SetBinError(19,21.44991);
   VH_tagFirst_Z_dR__130->SetBinError(20,17.76654);
   VH_tagFirst_Z_dR__130->SetBinError(21,14.02757);
   VH_tagFirst_Z_dR__130->SetBinError(22,12.49604);
   VH_tagFirst_Z_dR__130->SetBinError(23,12.10535);
   VH_tagFirst_Z_dR__130->SetBinError(24,10.10071);
   VH_tagFirst_Z_dR__130->SetBinError(25,11.19393);
   VH_tagFirst_Z_dR__130->SetBinError(26,8.881098);
   VH_tagFirst_Z_dR__130->SetBinError(27,10.91957);
   VH_tagFirst_Z_dR__130->SetBinError(28,7.339635);
   VH_tagFirst_Z_dR__130->SetBinError(29,7.811788);
   VH_tagFirst_Z_dR__130->SetBinError(30,5.838137);
   VH_tagFirst_Z_dR__130->SetBinError(31,5.893267);
   VH_tagFirst_Z_dR__130->SetEntries(115312);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Z_dR__130->SetLineColor(ci);
   VH_tagFirst_Z_dR__130->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VH_tagFirst_Z_dR__130->GetXaxis()->SetRange(1,30);
   VH_tagFirst_Z_dR__130->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Z_dR__130->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_dR__130->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Z_dR__130->GetYaxis()->SetTitle("Events/0.2");
   VH_tagFirst_Z_dR__130->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Z_dR__130->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Z_dR__130->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Z_dR__130->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Z_dR__130->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Z_dR__130->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Z_dR__130->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_dR__130->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Z_dR__130->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_WJets_tagFirst_16->Modified();
   Z_dR_WJets_tagFirst_16->cd();
   Z_dR_WJets_tagFirst_16->SetSelected(Z_dR_WJets_tagFirst_16);
}
