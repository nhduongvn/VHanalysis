void genWeight__16()
{
//=========Macro generated from canvas: genWeight__16/genWeight__16
//=========  (Thu Aug  3 12:48:54 2023) by ROOT version 6.14/09
   TCanvas *genWeight__16 = new TCanvas("genWeight__16", "genWeight__16",0,0,600,600);
   gStyle->SetOptStat(0);
   genWeight__16->SetHighLightColor(2);
   genWeight__16->Range(-2.8,-77663.65,2.533333,698972.8);
   genWeight__16->SetFillColor(0);
   genWeight__16->SetBorderMode(0);
   genWeight__16->SetBorderSize(2);
   genWeight__16->SetLeftMargin(0.15);
   genWeight__16->SetFrameBorderMode(0);
   genWeight__16->SetFrameBorderMode(0);
   
   TH1D *genWeight_stack_8 = new TH1D("genWeight_stack_8","",200,-2,2);
   genWeight_stack_8->SetBinContent(151,591723);
   genWeight_stack_8->SetBinError(151,379.3564);
   genWeight_stack_8->SetEntries(2433000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   genWeight_stack_8->SetFillColor(ci);
   genWeight_stack_8->GetXaxis()->SetTitle("Generator Weight");
   genWeight_stack_8->GetXaxis()->SetRange(1,200);
   genWeight_stack_8->GetXaxis()->SetLabelFont(42);
   genWeight_stack_8->GetXaxis()->SetLabelSize(0.035);
   genWeight_stack_8->GetXaxis()->SetTitleSize(0.035);
   genWeight_stack_8->GetXaxis()->SetTitleFont(42);
   genWeight_stack_8->GetYaxis()->SetLabelFont(42);
   genWeight_stack_8->GetYaxis()->SetLabelSize(0.035);
   genWeight_stack_8->GetYaxis()->SetTitleSize(0.035);
   genWeight_stack_8->GetYaxis()->SetTitleOffset(0);
   genWeight_stack_8->GetYaxis()->SetTitleFont(42);
   genWeight_stack_8->GetZaxis()->SetLabelFont(42);
   genWeight_stack_8->GetZaxis()->SetLabelSize(0.035);
   genWeight_stack_8->GetZaxis()->SetTitleSize(0.035);
   genWeight_stack_8->GetZaxis()->SetTitleFont(42);
   genWeight_stack_8->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   genWeight__16->Modified();
   genWeight__16->cd();
   genWeight__16->SetSelected(genWeight__16);
}
