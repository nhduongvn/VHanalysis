void Aplanarity_tags_17_logY()
{
//=========Macro generated from canvas: Aplanarity_tags_17/Aplanarity_tags_17
//=========  (Thu Aug 10 12:20:18 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_17 = new TCanvas("Aplanarity_tags_17", "Aplanarity_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_17->SetHighLightColor(2);
   Aplanarity_tags_17->Range(-0.2,0.6153058,1.133333,6.08373);
   Aplanarity_tags_17->SetFillColor(0);
   Aplanarity_tags_17->SetBorderMode(0);
   Aplanarity_tags_17->SetBorderSize(2);
   Aplanarity_tags_17->SetLogy();
   Aplanarity_tags_17->SetLeftMargin(0.15);
   Aplanarity_tags_17->SetFrameBorderMode(0);
   Aplanarity_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity_stack_1 = new TH1D("VbbHcc_tags_Aplanarity_stack_1","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(1,181693.3);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(2,42496.83);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(3,4421.708);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(4,2443.612);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(5,641.9645);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(6,163.5954);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(7,65.45972);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(8,64.68673);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(9,225.6827);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(10,29.05215);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(11,33.45759);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(1,16287.52);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(2,21764.95);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(3,844.5812);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(4,713.8552);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(5,345.6233);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(6,56.72336);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(7,34.63156);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(8,38.25001);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(9,196.5802);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(10,24.26578);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(11,27.2344);
   VbbHcc_tags_Aplanarity_stack_1->SetEntries(9821);

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
