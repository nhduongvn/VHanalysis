void Aplanarity_tags_17()
{
//=========Macro generated from canvas: Aplanarity_tags_17/Aplanarity_tags_17
//=========  (Tue Aug 22 09:20:45 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_17 = new TCanvas("Aplanarity_tags_17", "Aplanarity_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_17->SetHighLightColor(2);
   Aplanarity_tags_17->Range(-0.2,-26.62062,1.133333,239.5856);
   Aplanarity_tags_17->SetFillColor(0);
   Aplanarity_tags_17->SetBorderMode(0);
   Aplanarity_tags_17->SetBorderSize(2);
   Aplanarity_tags_17->SetLeftMargin(0.15);
   Aplanarity_tags_17->SetFrameBorderMode(0);
   Aplanarity_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity_stack_5 = new TH1D("VbbHcc_tags_Aplanarity_stack_5","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(1,202.8238);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(2,22.21577);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(3,7.058651);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(4,2.231422);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(5,0.3158016);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(6,0.4965072);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(7,0.107623);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(8,5.18861);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(9,0.1214668);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(11,0.09332064);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(1,11.50015);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(2,3.464365);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(3,1.866092);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(4,0.5844151);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(5,0.1955597);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(6,0.3125336);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(7,0.107623);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(8,5.108684);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(9,0.1214668);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(11,0.09332064);
   VbbHcc_tags_Aplanarity_stack_5->SetEntries(2041);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Aplanarity_stack_5->SetFillColor(ci);
   VbbHcc_tags_Aplanarity_stack_5->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_tags_Aplanarity_stack_5->GetXaxis()->SetRange(1,50);
   VbbHcc_tags_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_5->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tags_17->Modified();
   Aplanarity_tags_17->cd();
   Aplanarity_tags_17->SetSelected(Aplanarity_tags_17);
}
