void Sphericity_tags_17()
{
//=========Macro generated from canvas: Sphericity_tags_17/Sphericity_tags_17
//=========  (Tue Aug 22 09:20:43 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_17 = new TCanvas("Sphericity_tags_17", "Sphericity_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_17->SetHighLightColor(2);
   Sphericity_tags_17->Range(-0.2,-102.5965,1.133333,923.3681);
   Sphericity_tags_17->SetFillColor(0);
   Sphericity_tags_17->SetBorderMode(0);
   Sphericity_tags_17->SetBorderSize(2);
   Sphericity_tags_17->SetLeftMargin(0.15);
   Sphericity_tags_17->SetFrameBorderMode(0);
   Sphericity_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_4 = new TH1D("VbbHcc_tags_Sphericity_stack_4","",25,0,1);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(1,781.6872);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(2,601.1452);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(3,336.9104);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(4,221.9984);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(5,133.9629);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(6,65.70851);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(7,32.72994);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(8,20.0597);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(9,16.22613);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(10,12.04831);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(11,7.569362);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(12,7.147889);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(13,5.466053);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(14,4.577593);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(15,2.41706);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(16,2.277541);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(17,1.033128);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(18,1.515481);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(19,0.654947);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(20,0.09412286);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(21,0.07443236);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(1,16.1286);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(2,16.00655);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(3,10.876);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(4,10.09972);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(5,7.475689);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(6,4.0957);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(7,2.210583);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(8,1.829746);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(9,1.560419);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(10,1.361997);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(11,1.037513);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(12,1.151108);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(13,0.8379744);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(14,0.7794832);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(15,0.4442728);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(16,0.5792246);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(17,0.2715701);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(18,0.4429759);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(19,0.3710944);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(20,0.09412286);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(21,0.07443236);
   VbbHcc_tags_Sphericity_stack_4->SetEntries(17592);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Sphericity_stack_4->SetFillColor(ci);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_4->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tags_17->Modified();
   Sphericity_tags_17->cd();
   Sphericity_tags_17->SetSelected(Sphericity_tags_17);
}
