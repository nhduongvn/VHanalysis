void genWeight__18_logY()
{
//=========Macro generated from canvas: genWeight__18/genWeight__18
//=========  (Thu Aug  3 13:22:14 2023) by ROOT version 6.14/09
   TCanvas *genWeight__18 = new TCanvas("genWeight__18", "genWeight__18",0,0,600,600);
   gStyle->SetOptStat(0);
   genWeight__18->SetHighLightColor(2);
   genWeight__18->Range(-2.8,-2.748352,2.533333,1.724871);
   genWeight__18->SetFillColor(0);
   genWeight__18->SetBorderMode(0);
   genWeight__18->SetBorderSize(2);
   genWeight__18->SetLogy();
   genWeight__18->SetLeftMargin(0.15);
   genWeight__18->SetFrameBorderMode(0);
   genWeight__18->SetFrameBorderMode(0);
   
   TH1D *genWeight_stack_2 = new TH1D("genWeight_stack_2","",200,-2,2);
   genWeight_stack_2->SetBinContent(0,423310.5);
   genWeight_stack_2->SetBinContent(201,1.76598e+07);
   genWeight_stack_2->SetBinError(0,146.7074);
   genWeight_stack_2->SetBinError(201,1379.911);
   genWeight_stack_2->SetEntries(2.87125e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#660066");
   genWeight_stack_2->SetFillColor(ci);
   genWeight_stack_2->GetXaxis()->SetTitle("Generator Weight");
   genWeight_stack_2->GetXaxis()->SetRange(1,200);
   genWeight_stack_2->GetXaxis()->SetLabelFont(42);
   genWeight_stack_2->GetXaxis()->SetLabelSize(0.035);
   genWeight_stack_2->GetXaxis()->SetTitleSize(0.035);
   genWeight_stack_2->GetXaxis()->SetTitleFont(42);
   genWeight_stack_2->GetYaxis()->SetLabelFont(42);
   genWeight_stack_2->GetYaxis()->SetLabelSize(0.035);
   genWeight_stack_2->GetYaxis()->SetTitleSize(0.035);
   genWeight_stack_2->GetYaxis()->SetTitleOffset(0);
   genWeight_stack_2->GetYaxis()->SetTitleFont(42);
   genWeight_stack_2->GetZaxis()->SetLabelFont(42);
   genWeight_stack_2->GetZaxis()->SetLabelSize(0.035);
   genWeight_stack_2->GetZaxis()->SetTitleSize(0.035);
   genWeight_stack_2->GetZaxis()->SetTitleFont(42);
   genWeight_stack_2->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   genWeight__18->Modified();
   genWeight__18->cd();
   genWeight__18->SetSelected(genWeight__18);
}
