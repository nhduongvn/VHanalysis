void Sphericity_tags_18_logY()
{
//=========Macro generated from canvas: Sphericity_tags_18/Sphericity_tags_18
//=========  (Thu Aug 10 12:31:33 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_18 = new TCanvas("Sphericity_tags_18", "Sphericity_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_18->SetHighLightColor(2);
   Sphericity_tags_18->Range(-0.2,-1.750616,1.133333,2.844436);
   Sphericity_tags_18->SetFillColor(0);
   Sphericity_tags_18->SetBorderMode(0);
   Sphericity_tags_18->SetBorderSize(2);
   Sphericity_tags_18->SetLogy();
   Sphericity_tags_18->SetLeftMargin(0.15);
   Sphericity_tags_18->SetFrameBorderMode(0);
   Sphericity_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_5 = new TH1D("VbbHcc_tags_Sphericity_stack_5","",25,0,1);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(1,128.0507);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(2,69.90079);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(3,51.79515);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(4,20.79885);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(5,17.605);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(6,11.24559);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(7,8.117941);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(8,5.907556);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(9,1.614117);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(10,1.289526);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(11,1.310166);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(12,1.459342);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(13,1.003111);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(14,1.547857);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(15,0.3439623);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(16,0.6279484);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(17,0.3983092);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(19,0.1023102);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(1,13.96635);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(2,6.438862);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(3,7.430972);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(4,2.847368);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(5,2.721566);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(6,3.160413);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(7,2.317505);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(8,1.142651);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(9,0.4323061);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(10,0.4575087);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(11,0.5161366);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(12,0.5170688);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(13,0.3412886);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(14,0.6249858);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(15,0.1899505);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(16,0.3220575);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(17,0.2889793);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(19,0.1023102);
   VbbHcc_tags_Sphericity_stack_5->SetEntries(2359);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Sphericity_stack_5->SetFillColor(ci);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_5->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tags_18->Modified();
   Sphericity_tags_18->cd();
   Sphericity_tags_18->SetSelected(Sphericity_tags_18);
}
