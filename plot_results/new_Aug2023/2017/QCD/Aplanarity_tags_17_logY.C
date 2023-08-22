void Aplanarity_tags_17_logY()
{
//=========Macro generated from canvas: Aplanarity_tags_17/Aplanarity_tags_17
//=========  (Tue Aug 22 09:16:29 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_17 = new TCanvas("Aplanarity_tags_17", "Aplanarity_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_17->SetHighLightColor(2);
   Aplanarity_tags_17->Range(-0.2,0.59454,1.133333,5.997214);
   Aplanarity_tags_17->SetFillColor(0);
   Aplanarity_tags_17->SetBorderMode(0);
   Aplanarity_tags_17->SetBorderSize(2);
   Aplanarity_tags_17->SetLogy();
   Aplanarity_tags_17->SetLeftMargin(0.15);
   Aplanarity_tags_17->SetFrameBorderMode(0);
   Aplanarity_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity_stack_1 = new TH1D("VbbHcc_tags_Aplanarity_stack_1","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(1,151146.2);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(2,37335.74);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(3,3530.976);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(4,2046.268);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(5,505.0689);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(6,147.1842);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(7,50.69326);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(8,58.21722);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(9,143.8005);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(10,27.27956);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(11,28.66641);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(1,17138.12);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(2,20655.16);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(3,657.5047);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(4,578.8718);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(5,277.0871);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(6,50.8827);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(7,29.60675);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(8,33.34786);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(9,136.9876);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(10,23.34227);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(11,23.72405);
   VbbHcc_tags_Aplanarity_stack_1->SetEntries(9351);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Aplanarity_stack_1->SetFillColor(ci);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetRange(1,50);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->Draw("HIST");
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
