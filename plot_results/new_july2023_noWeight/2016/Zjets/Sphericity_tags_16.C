void Sphericity_tags_16()
{
//=========Macro generated from canvas: Sphericity_tags_16/Sphericity_tags_16
//=========  (Thu Aug  3 12:23:32 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_16 = new TCanvas("Sphericity_tags_16", "Sphericity_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_16->SetHighLightColor(2);
   Sphericity_tags_16->Range(-0.2,-89.78928,1.133333,808.1035);
   Sphericity_tags_16->SetFillColor(0);
   Sphericity_tags_16->SetBorderMode(0);
   Sphericity_tags_16->SetBorderSize(2);
   Sphericity_tags_16->SetLeftMargin(0.15);
   Sphericity_tags_16->SetFrameBorderMode(0);
   Sphericity_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_4 = new TH1D("VbbHcc_tags_Sphericity_stack_4","",25,0,1);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(1,684.1088);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(2,550.731);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(3,338.1958);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(4,209.2546);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(5,92.78925);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(6,56.29505);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(7,24.26228);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(8,15.18613);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(9,11.58696);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(10,8.677193);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(11,4.979063);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(12,3.991354);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(13,2.126254);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(14,2.238928);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(15,2.438653);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(16,1.971138);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(17,1.916291);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(18,0.6343579);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(19,0.332875);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(20,0.066575);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(21,0.066575);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(1,19.89556);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(2,19.22574);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(3,16.78688);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(4,13.29348);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(5,4.656742);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(6,5.373266);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(7,1.850161);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(8,1.31251);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(9,1.136507);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(10,1.173137);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(11,0.764968);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(12,0.795005);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(13,0.3894313);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(14,0.5239528);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(15,0.5364916);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(16,0.4450796);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(17,0.4419986);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(18,0.2121021);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(19,0.1488662);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(20,0.066575);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(21,0.066575);
   VbbHcc_tags_Sphericity_stack_4->SetEntries(14953);

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
