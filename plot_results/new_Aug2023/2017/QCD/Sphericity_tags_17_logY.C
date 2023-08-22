void Sphericity_tags_17_logY()
{
//=========Macro generated from canvas: Sphericity_tags_17/Sphericity_tags_17
//=========  (Tue Aug 22 09:16:27 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_17 = new TCanvas("Sphericity_tags_17", "Sphericity_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_17->SetHighLightColor(2);
   Sphericity_tags_17->Range(-0.2,0.3749107,1.133333,5.625344);
   Sphericity_tags_17->SetFillColor(0);
   Sphericity_tags_17->SetBorderMode(0);
   Sphericity_tags_17->SetBorderSize(2);
   Sphericity_tags_17->SetLogy();
   Sphericity_tags_17->SetLeftMargin(0.15);
   Sphericity_tags_17->SetFrameBorderMode(0);
   Sphericity_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_1 = new TH1D("VbbHcc_tags_Sphericity_stack_1","",25,0,1);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(1,66489.23);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(2,46495.33);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(3,27614.76);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(4,15086);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(5,28993.45);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(6,4351.742);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(7,1232.771);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(8,1600.208);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(9,910.5192);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(10,739.0937);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(11,588.7349);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(12,185.9569);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(13,177.5835);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(14,197.6985);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(15,217.7149);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(16,87.00646);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(17,15.88488);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(18,20.4862);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(19,15.9743);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(1,16722.59);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(2,2939.266);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(3,2095.478);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(4,1485.373);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(5,20618.92);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(6,759.7334);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(7,216.3407);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(8,512.7038);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(9,315.5352);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(10,354.5807);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(11,265.8892);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(12,51.69362);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(13,49.56875);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(14,69.89113);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(15,61.42913);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(16,29.70181);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(17,8.212354);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(18,9.530364);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(19,8.026554);
   VbbHcc_tags_Sphericity_stack_1->SetEntries(9351);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Sphericity_stack_1->SetFillColor(ci);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_1->Draw("HIST");
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
