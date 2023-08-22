void Aplanarity_tags_18()
{
//=========Macro generated from canvas: Aplanarity_tags_18/Aplanarity_tags_18
//=========  (Tue Aug 22 09:20:46 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_18 = new TCanvas("Aplanarity_tags_18", "Aplanarity_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_18->SetHighLightColor(2);
   Aplanarity_tags_18->Range(-0.2,-37.4802,1.133333,337.3217);
   Aplanarity_tags_18->SetFillColor(0);
   Aplanarity_tags_18->SetBorderMode(0);
   Aplanarity_tags_18->SetBorderSize(2);
   Aplanarity_tags_18->SetLeftMargin(0.15);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity_stack_5 = new TH1D("VbbHcc_tags_Aplanarity_stack_5","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(1,285.5634);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(2,27.63602);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(3,7.500004);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(4,4.555477);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(5,0.9692972);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(6,0.3286075);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(7,0.165398);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(8,0.2985471);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(9,0.0206714);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(10,0.2878642);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(11,0.04806045);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(1,17.14155);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(2,5.067574);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(3,1.470218);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(4,2.689363);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(5,0.4065801);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(6,0.1903192);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(7,0.1342308);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(8,0.1680225);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(9,0.0206714);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(10,0.2878642);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(11,0.04806045);
   VbbHcc_tags_Aplanarity_stack_5->SetEntries(2023);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tags_18->Modified();
   Aplanarity_tags_18->cd();
   Aplanarity_tags_18->SetSelected(Aplanarity_tags_18);
}
