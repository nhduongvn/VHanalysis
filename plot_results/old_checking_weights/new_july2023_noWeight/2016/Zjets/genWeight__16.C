void genWeight__16()
{
//=========Macro generated from canvas: genWeight__16/genWeight__16
//=========  (Thu Aug  3 12:48:54 2023) by ROOT version 6.14/09
   TCanvas *genWeight__16 = new TCanvas("genWeight__16", "genWeight__16",0,0,600,600);
   gStyle->SetOptStat(0);
   genWeight__16->SetHighLightColor(2);
   genWeight__16->Range(-2.8,-5443751,2.533333,4.899376e+07);
   genWeight__16->SetFillColor(0);
   genWeight__16->SetBorderMode(0);
   genWeight__16->SetBorderSize(2);
   genWeight__16->SetLeftMargin(0.15);
   genWeight__16->SetFrameBorderMode(0);
   genWeight__16->SetFrameBorderMode(0);
   
   TH1D *genWeight_stack_4 = new TH1D("genWeight_stack_4","",200,-2,2);
   genWeight_stack_4->SetBinContent(151,4.14762e+07);
   genWeight_stack_4->SetBinError(151,9879.702);
   genWeight_stack_4->SetEntries(4.774335e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cccc");
   genWeight_stack_4->SetFillColor(ci);
   genWeight_stack_4->GetXaxis()->SetTitle("Generator Weight");
   genWeight_stack_4->GetXaxis()->SetRange(1,200);
   genWeight_stack_4->GetXaxis()->SetLabelFont(42);
   genWeight_stack_4->GetXaxis()->SetLabelSize(0.035);
   genWeight_stack_4->GetXaxis()->SetTitleSize(0.035);
   genWeight_stack_4->GetXaxis()->SetTitleFont(42);
   genWeight_stack_4->GetYaxis()->SetLabelFont(42);
   genWeight_stack_4->GetYaxis()->SetLabelSize(0.035);
   genWeight_stack_4->GetYaxis()->SetTitleSize(0.035);
   genWeight_stack_4->GetYaxis()->SetTitleOffset(0);
   genWeight_stack_4->GetYaxis()->SetTitleFont(42);
   genWeight_stack_4->GetZaxis()->SetLabelFont(42);
   genWeight_stack_4->GetZaxis()->SetLabelSize(0.035);
   genWeight_stack_4->GetZaxis()->SetTitleSize(0.035);
   genWeight_stack_4->GetZaxis()->SetTitleFont(42);
   genWeight_stack_4->Draw("HIST");
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
