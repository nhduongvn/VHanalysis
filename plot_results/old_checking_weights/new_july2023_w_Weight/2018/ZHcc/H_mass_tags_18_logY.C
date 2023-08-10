void H_mass_tags_18_logY()
{
//=========Macro generated from canvas: H_mass_tags_18/H_mass_tags_18
//=========  (Thu Aug 10 10:40:47 2023) by ROOT version 6.14/09
   TCanvas *H_mass_tags_18 = new TCanvas("H_mass_tags_18", "H_mass_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_mass_tags_18->SetHighLightColor(2);
   H_mass_tags_18->Range(-80,-3.042802,453.3333,-1.372929);
   H_mass_tags_18->SetFillColor(0);
   H_mass_tags_18->SetBorderMode(0);
   H_mass_tags_18->SetBorderSize(2);
   H_mass_tags_18->SetLogy();
   H_mass_tags_18->SetLeftMargin(0.15);
   H_mass_tags_18->SetFrameBorderMode(0);
   H_mass_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_mass_stack_11 = new TH1D("VbbHcc_tags_H_mass_stack_11","",40,0,400);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(3,0.002811088);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(7,0.002885672);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(8,0.005665125);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(9,0.003060115);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(10,0.003551429);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(11,0.006627862);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(12,0.01243115);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(13,0.01522421);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(14,0.008651148);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(15,0.01122961);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(16,0.003812011);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(17,0.002842044);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(19,0.00283147);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(20,0.005662941);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(21,0.002885672);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(22,0.004830859);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(23,0.006127922);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(24,0.00283147);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(25,0.002662043);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(26,0.003682377);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(27,0.002811088);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(36,0.002885672);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(37,0.002811088);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(41,0.06371167);
   VbbHcc_tags_H_mass_stack_11->SetBinError(3,0.002811088);
   VbbHcc_tags_H_mass_stack_11->SetBinError(7,0.002885672);
   VbbHcc_tags_H_mass_stack_11->SetBinError(8,0.00400587);
   VbbHcc_tags_H_mass_stack_11->SetBinError(9,0.003060115);
   VbbHcc_tags_H_mass_stack_11->SetBinError(10,0.003551429);
   VbbHcc_tags_H_mass_stack_11->SetBinError(11,0.00474377);
   VbbHcc_tags_H_mass_stack_11->SetBinError(12,0.006328473);
   VbbHcc_tags_H_mass_stack_11->SetBinError(13,0.007148034);
   VbbHcc_tags_H_mass_stack_11->SetBinError(14,0.004999565);
   VbbHcc_tags_H_mass_stack_11->SetBinError(15,0.005722219);
   VbbHcc_tags_H_mass_stack_11->SetBinError(16,0.003812011);
   VbbHcc_tags_H_mass_stack_11->SetBinError(17,0.002842044);
   VbbHcc_tags_H_mass_stack_11->SetBinError(19,0.00283147);
   VbbHcc_tags_H_mass_stack_11->SetBinError(20,0.004004304);
   VbbHcc_tags_H_mass_stack_11->SetBinError(21,0.002885672);
   VbbHcc_tags_H_mass_stack_11->SetBinError(22,0.003466234);
   VbbHcc_tags_H_mass_stack_11->SetBinError(23,0.004387592);
   VbbHcc_tags_H_mass_stack_11->SetBinError(24,0.00283147);
   VbbHcc_tags_H_mass_stack_11->SetBinError(25,0.002662043);
   VbbHcc_tags_H_mass_stack_11->SetBinError(26,0.003682377);
   VbbHcc_tags_H_mass_stack_11->SetBinError(27,0.002811088);
   VbbHcc_tags_H_mass_stack_11->SetBinError(36,0.002885672);
   VbbHcc_tags_H_mass_stack_11->SetBinError(37,0.002811088);
   VbbHcc_tags_H_mass_stack_11->SetBinError(41,0.01337053);
   VbbHcc_tags_H_mass_stack_11->SetEntries(64);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_mass_stack_11->SetFillColor(ci);
   VbbHcc_tags_H_mass_stack_11->GetXaxis()->SetTitle("M_{H} [GeV]");
   VbbHcc_tags_H_mass_stack_11->GetXaxis()->SetRange(1,40);
   VbbHcc_tags_H_mass_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_11->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_mass_tags_18->Modified();
   H_mass_tags_18->cd();
   H_mass_tags_18->SetSelected(H_mass_tags_18);
}
