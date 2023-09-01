#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_tags_16()
{
//=========Macro generated from canvas: Sphericity_tags_16/Sphericity_tags_16
//=========  (Fri Sep  1 13:23:33 2023) by ROOT version 6.28/04
   TCanvas *Sphericity_tags_16 = new TCanvas("Sphericity_tags_16", "Sphericity_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_16->SetHighLightColor(2);
   Sphericity_tags_16->Range(-0.2,-500.9966,1.133333,4508.969);
   Sphericity_tags_16->SetFillColor(0);
   Sphericity_tags_16->SetBorderMode(0);
   Sphericity_tags_16->SetBorderSize(2);
   Sphericity_tags_16->SetLeftMargin(0.15);
   Sphericity_tags_16->SetFrameBorderMode(0);
   Sphericity_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity__216 = new TH1D("VbbHcc_tags_Sphericity__216","",25,0,1);
   VbbHcc_tags_Sphericity__216->SetBinContent(1,3817.117);
   VbbHcc_tags_Sphericity__216->SetBinContent(2,3173.343);
   VbbHcc_tags_Sphericity__216->SetBinContent(3,1829.849);
   VbbHcc_tags_Sphericity__216->SetBinContent(4,1061.768);
   VbbHcc_tags_Sphericity__216->SetBinContent(5,626.6705);
   VbbHcc_tags_Sphericity__216->SetBinContent(6,365.2627);
   VbbHcc_tags_Sphericity__216->SetBinContent(7,218.0319);
   VbbHcc_tags_Sphericity__216->SetBinContent(8,136.1699);
   VbbHcc_tags_Sphericity__216->SetBinContent(9,89.01398);
   VbbHcc_tags_Sphericity__216->SetBinContent(10,62.69494);
   VbbHcc_tags_Sphericity__216->SetBinContent(11,45.24561);
   VbbHcc_tags_Sphericity__216->SetBinContent(12,30.03984);
   VbbHcc_tags_Sphericity__216->SetBinContent(13,22.68191);
   VbbHcc_tags_Sphericity__216->SetBinContent(14,17.2488);
   VbbHcc_tags_Sphericity__216->SetBinContent(15,13.20323);
   VbbHcc_tags_Sphericity__216->SetBinContent(16,10.28804);
   VbbHcc_tags_Sphericity__216->SetBinContent(17,7.516646);
   VbbHcc_tags_Sphericity__216->SetBinContent(18,4.754448);
   VbbHcc_tags_Sphericity__216->SetBinContent(19,2.378284);
   VbbHcc_tags_Sphericity__216->SetBinContent(20,1.252174);
   VbbHcc_tags_Sphericity__216->SetBinContent(21,0.3994556);
   VbbHcc_tags_Sphericity__216->SetBinContent(22,0.05830763);
   VbbHcc_tags_Sphericity__216->SetBinError(1,14.62979);
   VbbHcc_tags_Sphericity__216->SetBinError(2,13.20634);
   VbbHcc_tags_Sphericity__216->SetBinError(3,10.06761);
   VbbHcc_tags_Sphericity__216->SetBinError(4,7.705516);
   VbbHcc_tags_Sphericity__216->SetBinError(5,5.949172);
   VbbHcc_tags_Sphericity__216->SetBinError(6,4.544019);
   VbbHcc_tags_Sphericity__216->SetBinError(7,3.502205);
   VbbHcc_tags_Sphericity__216->SetBinError(8,2.793722);
   VbbHcc_tags_Sphericity__216->SetBinError(9,2.244969);
   VbbHcc_tags_Sphericity__216->SetBinError(10,1.905628);
   VbbHcc_tags_Sphericity__216->SetBinError(11,1.626778);
   VbbHcc_tags_Sphericity__216->SetBinError(12,1.315942);
   VbbHcc_tags_Sphericity__216->SetBinError(13,1.149832);
   VbbHcc_tags_Sphericity__216->SetBinError(14,1.006441);
   VbbHcc_tags_Sphericity__216->SetBinError(15,0.8912289);
   VbbHcc_tags_Sphericity__216->SetBinError(16,0.7602235);
   VbbHcc_tags_Sphericity__216->SetBinError(17,0.6618378);
   VbbHcc_tags_Sphericity__216->SetBinError(18,0.5353249);
   VbbHcc_tags_Sphericity__216->SetBinError(19,0.3671602);
   VbbHcc_tags_Sphericity__216->SetBinError(20,0.2642404);
   VbbHcc_tags_Sphericity__216->SetBinError(21,0.1463827);
   VbbHcc_tags_Sphericity__216->SetBinError(22,0.05830763);
   VbbHcc_tags_Sphericity__216->SetEntries(226633);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Sphericity__216->SetFillColor(ci);
   VbbHcc_tags_Sphericity__216->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity__216->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity__216->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__216->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity__216->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__216->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__216->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__216->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__216->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity__216->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__216->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tags_16->Modified();
   Sphericity_tags_16->cd();
   Sphericity_tags_16->SetSelected(Sphericity_tags_16);
}
