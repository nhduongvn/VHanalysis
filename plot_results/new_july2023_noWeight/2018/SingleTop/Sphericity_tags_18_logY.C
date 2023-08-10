void Sphericity_tags_18_logY()
{
//=========Macro generated from canvas: Sphericity_tags_18/Sphericity_tags_18
//=========  (Thu Aug 10 12:31:33 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_18 = new TCanvas("Sphericity_tags_18", "Sphericity_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_18->SetHighLightColor(2);
   Sphericity_tags_18->Range(-0.2,-2.181726,1.133333,3.491661);
   Sphericity_tags_18->SetFillColor(0);
   Sphericity_tags_18->SetBorderMode(0);
   Sphericity_tags_18->SetBorderSize(2);
   Sphericity_tags_18->SetLogy();
   Sphericity_tags_18->SetLeftMargin(0.15);
   Sphericity_tags_18->SetFrameBorderMode(0);
   Sphericity_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_2 = new TH1D("VbbHcc_tags_Sphericity_stack_2","",25,0,1);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(1,443.3775);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(2,336.1533);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(3,196.3735);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(4,119.9009);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(5,70.12198);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(6,37.05136);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(7,23.79611);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(8,13.86219);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(9,10.31112);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(10,7.489922);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(11,5.82195);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(12,4.638097);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(13,3.554599);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(14,2.134938);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(15,1.992664);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(16,1.470899);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(17,1.130693);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(18,0.5576908);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(19,0.194403);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(20,0.04860075);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(1,8.647367);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(2,7.413782);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(3,5.75566);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(4,4.496998);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(5,3.529843);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(6,2.482595);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(7,2.01899);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(8,1.517132);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(9,1.339773);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(10,1.179065);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(11,0.9870867);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(12,0.934632);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(13,0.7908928);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(14,0.5484655);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(15,0.6422939);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(16,0.4570374);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(17,0.4385761);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(18,0.3232716);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(19,0.09720149);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(20,0.04860075);
   VbbHcc_tags_Sphericity_stack_2->SetEntries(14890);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Sphericity_stack_2->SetFillColor(ci);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_2->Draw("HIST");
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
