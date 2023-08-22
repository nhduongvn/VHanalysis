void Aplanarity_tags_16()
{
//=========Macro generated from canvas: Aplanarity_tags_16/Aplanarity_tags_16
//=========  (Tue Aug 22 09:20:45 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_16 = new TCanvas("Aplanarity_tags_16", "Aplanarity_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_16->SetHighLightColor(2);
   Aplanarity_tags_16->Range(-0.2,-18.03876,1.133333,162.3488);
   Aplanarity_tags_16->SetFillColor(0);
   Aplanarity_tags_16->SetBorderMode(0);
   Aplanarity_tags_16->SetBorderSize(2);
   Aplanarity_tags_16->SetLeftMargin(0.15);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity_stack_5 = new TH1D("VbbHcc_tags_Aplanarity_stack_5","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(1,137.4381);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(2,12.98712);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(3,2.443653);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(4,0.8297449);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(5,0.6436405);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(6,1.006676);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(7,0.2059008);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(11,0.006447807);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(1,9.546742);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(2,1.927234);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(3,0.9250693);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(4,0.2187703);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(5,0.2500782);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(6,0.7018682);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(7,0.1517921);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(11,0.006447807);
   VbbHcc_tags_Aplanarity_stack_5->SetEntries(3148);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tags_16->Modified();
   Aplanarity_tags_16->cd();
   Aplanarity_tags_16->SetSelected(Aplanarity_tags_16);
}
