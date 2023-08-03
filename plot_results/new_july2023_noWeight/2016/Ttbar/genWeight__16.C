void genWeight__16()
{
//=========Macro generated from canvas: genWeight__16/genWeight__16
//=========  (Thu Aug  3 12:48:54 2023) by ROOT version 6.14/09
   TCanvas *genWeight__16 = new TCanvas("genWeight__16", "genWeight__16",0,0,600,600);
   gStyle->SetOptStat(0);
   genWeight__16->SetHighLightColor(2);
   genWeight__16->Range(-2.8,-0.13125,2.533333,1.18125);
   genWeight__16->SetFillColor(0);
   genWeight__16->SetBorderMode(0);
   genWeight__16->SetBorderSize(2);
   genWeight__16->SetLeftMargin(0.15);
   genWeight__16->SetFrameBorderMode(0);
   genWeight__16->SetFrameBorderMode(0);
   
   TH1D *genWeight_stack_3 = new TH1D("genWeight_stack_3","",200,-2,2);
   genWeight_stack_3->SetBinContent(0,121873.3);
   genWeight_stack_3->SetBinContent(201,3.00211e+07);
   genWeight_stack_3->SetBinError(0,83.28604);
   genWeight_stack_3->SetBinError(201,1307.141);
   genWeight_stack_3->SetEntries(5.53915e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc00cc");
   genWeight_stack_3->SetFillColor(ci);
   genWeight_stack_3->GetXaxis()->SetTitle("Generator Weight");
   genWeight_stack_3->GetXaxis()->SetRange(1,200);
   genWeight_stack_3->GetXaxis()->SetLabelFont(42);
   genWeight_stack_3->GetXaxis()->SetLabelSize(0.035);
   genWeight_stack_3->GetXaxis()->SetTitleSize(0.035);
   genWeight_stack_3->GetXaxis()->SetTitleFont(42);
   genWeight_stack_3->GetYaxis()->SetLabelFont(42);
   genWeight_stack_3->GetYaxis()->SetLabelSize(0.035);
   genWeight_stack_3->GetYaxis()->SetTitleSize(0.035);
   genWeight_stack_3->GetYaxis()->SetTitleOffset(0);
   genWeight_stack_3->GetYaxis()->SetTitleFont(42);
   genWeight_stack_3->GetZaxis()->SetLabelFont(42);
   genWeight_stack_3->GetZaxis()->SetLabelSize(0.035);
   genWeight_stack_3->GetZaxis()->SetTitleSize(0.035);
   genWeight_stack_3->GetZaxis()->SetTitleFont(42);
   genWeight_stack_3->Draw("HIST");
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
