void genWeight__16_logY()
{
//=========Macro generated from canvas: genWeight__16/genWeight__16
//=========  (Thu Aug  3 13:22:13 2023) by ROOT version 6.14/09
   TCanvas *genWeight__16 = new TCanvas("genWeight__16", "genWeight__16",0,0,600,600);
   gStyle->SetOptStat(0);
   genWeight__16->SetHighLightColor(2);
   genWeight__16->Range(-2.8,4.477086,2.533333,8.95031);
   genWeight__16->SetFillColor(0);
   genWeight__16->SetBorderMode(0);
   genWeight__16->SetBorderSize(2);
   genWeight__16->SetLogy();
   genWeight__16->SetLeftMargin(0.15);
   genWeight__16->SetFrameBorderMode(0);
   genWeight__16->SetFrameBorderMode(0);
   
   TH1D *genWeight_stack_5 = new TH1D("genWeight_stack_5","",200,-2,2);
   genWeight_stack_5->SetBinContent(151,1.680501e+08);
   genWeight_stack_5->SetBinError(151,25040.93);
   genWeight_stack_5->SetEntries(1.559355e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff99cc");
   genWeight_stack_5->SetFillColor(ci);
   genWeight_stack_5->GetXaxis()->SetTitle("Generator Weight");
   genWeight_stack_5->GetXaxis()->SetRange(1,200);
   genWeight_stack_5->GetXaxis()->SetLabelFont(42);
   genWeight_stack_5->GetXaxis()->SetLabelSize(0.035);
   genWeight_stack_5->GetXaxis()->SetTitleSize(0.035);
   genWeight_stack_5->GetXaxis()->SetTitleFont(42);
   genWeight_stack_5->GetYaxis()->SetLabelFont(42);
   genWeight_stack_5->GetYaxis()->SetLabelSize(0.035);
   genWeight_stack_5->GetYaxis()->SetTitleSize(0.035);
   genWeight_stack_5->GetYaxis()->SetTitleOffset(0);
   genWeight_stack_5->GetYaxis()->SetTitleFont(42);
   genWeight_stack_5->GetZaxis()->SetLabelFont(42);
   genWeight_stack_5->GetZaxis()->SetLabelSize(0.035);
   genWeight_stack_5->GetZaxis()->SetTitleSize(0.035);
   genWeight_stack_5->GetZaxis()->SetTitleFont(42);
   genWeight_stack_5->Draw("HIST");
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
