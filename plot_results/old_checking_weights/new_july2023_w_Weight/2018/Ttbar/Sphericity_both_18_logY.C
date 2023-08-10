void Sphericity_both_18_logY()
{
//=========Macro generated from canvas: Sphericity_both_18/Sphericity_both_18
//=========  (Thu Aug 10 10:43:27 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_18 = new TCanvas("Sphericity_both_18", "Sphericity_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_18->SetHighLightColor(2);
   Sphericity_both_18->Range(-0.2,-1.505018,1.133333,4.625915);
   Sphericity_both_18->SetFillColor(0);
   Sphericity_both_18->SetBorderMode(0);
   Sphericity_both_18->SetBorderSize(2);
   Sphericity_both_18->SetLogy();
   Sphericity_both_18->SetLeftMargin(0.15);
   Sphericity_both_18->SetFrameBorderMode(0);
   Sphericity_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_3 = new TH1D("VbbHcc_both_Sphericity_stack_3","",25,0,1);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(1,4978.453);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(2,5435.921);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(3,4056.968);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(4,3068.677);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(5,2399.279);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(6,1903.605);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(7,1575.418);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(8,1327.652);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(9,1119.794);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(10,926.7592);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(11,806.988);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(12,681.0784);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(13,585.0466);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(14,487.1791);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(15,398.5888);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(16,327.5664);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(17,248.5306);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(18,175.9983);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(19,105.5201);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(20,51.68691);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(21,18.40179);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(22,7.443833);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(23,1.695609);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(24,0.2565108);
   VbbHcc_both_Sphericity_stack_3->SetBinError(1,22.76369);
   VbbHcc_both_Sphericity_stack_3->SetBinError(2,22.99918);
   VbbHcc_both_Sphericity_stack_3->SetBinError(3,19.88301);
   VbbHcc_both_Sphericity_stack_3->SetBinError(4,16.99871);
   VbbHcc_both_Sphericity_stack_3->SetBinError(5,15.70695);
   VbbHcc_both_Sphericity_stack_3->SetBinError(6,13.78497);
   VbbHcc_both_Sphericity_stack_3->SetBinError(7,12.27707);
   VbbHcc_both_Sphericity_stack_3->SetBinError(8,11.48199);
   VbbHcc_both_Sphericity_stack_3->SetBinError(9,10.3761);
   VbbHcc_both_Sphericity_stack_3->SetBinError(10,9.334722);
   VbbHcc_both_Sphericity_stack_3->SetBinError(11,9.253424);
   VbbHcc_both_Sphericity_stack_3->SetBinError(12,8.067244);
   VbbHcc_both_Sphericity_stack_3->SetBinError(13,7.979987);
   VbbHcc_both_Sphericity_stack_3->SetBinError(14,6.628791);
   VbbHcc_both_Sphericity_stack_3->SetBinError(15,5.980531);
   VbbHcc_both_Sphericity_stack_3->SetBinError(16,6.642715);
   VbbHcc_both_Sphericity_stack_3->SetBinError(17,4.874127);
   VbbHcc_both_Sphericity_stack_3->SetBinError(18,4.270785);
   VbbHcc_both_Sphericity_stack_3->SetBinError(19,3.072676);
   VbbHcc_both_Sphericity_stack_3->SetBinError(20,2.192438);
   VbbHcc_both_Sphericity_stack_3->SetBinError(21,1.297097);
   VbbHcc_both_Sphericity_stack_3->SetBinError(22,0.7946645);
   VbbHcc_both_Sphericity_stack_3->SetBinError(23,0.3890152);
   VbbHcc_both_Sphericity_stack_3->SetBinError(24,0.129556);
   VbbHcc_both_Sphericity_stack_3->SetEntries(383737);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Sphericity_stack_3->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_3->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_both_18->Modified();
   Sphericity_both_18->cd();
   Sphericity_both_18->SetSelected(Sphericity_both_18);
}
