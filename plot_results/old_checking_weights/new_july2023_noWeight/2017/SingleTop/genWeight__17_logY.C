void genWeight__17_logY()
{
//=========Macro generated from canvas: genWeight__17/genWeight__17
//=========  (Thu Aug  3 13:22:14 2023) by ROOT version 6.14/09
   TCanvas *genWeight__17 = new TCanvas("genWeight__17", "genWeight__17",0,0,600,600);
   gStyle->SetOptStat(0);
   genWeight__17->SetHighLightColor(2);
   genWeight__17->Range(-2.8,-2.748352,2.533333,1.724871);
   genWeight__17->SetFillColor(0);
   genWeight__17->SetBorderMode(0);
   genWeight__17->SetBorderSize(2);
   genWeight__17->SetLogy();
   genWeight__17->SetLeftMargin(0.15);
   genWeight__17->SetFrameBorderMode(0);
   genWeight__17->SetFrameBorderMode(0);
   
   TH1D *genWeight_stack_2 = new TH1D("genWeight_stack_2","",200,-2,2);
   genWeight_stack_2->SetBinContent(0,294446.6);
   genWeight_stack_2->SetBinContent(201,1.228262e+07);
   genWeight_stack_2->SetBinError(0,119.9592);
   genWeight_stack_2->SetBinError(201,1112.687);
   genWeight_stack_2->SetEntries(2.08077e+08);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   genWeight__17->Modified();
   genWeight__17->cd();
   genWeight__17->SetSelected(genWeight__17);
}
