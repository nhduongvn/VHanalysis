void Aplanarity_tags_16()
{
//=========Macro generated from canvas: Aplanarity_tags_16/Aplanarity_tags_16
//=========  (Tue Aug 22 09:20:45 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_16 = new TCanvas("Aplanarity_tags_16", "Aplanarity_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_16->SetHighLightColor(2);
   Aplanarity_tags_16->Range(-0.2,-3.422282,1.133333,30.80054);
   Aplanarity_tags_16->SetFillColor(0);
   Aplanarity_tags_16->SetBorderMode(0);
   Aplanarity_tags_16->SetBorderSize(2);
   Aplanarity_tags_16->SetLeftMargin(0.15);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity_stack_9 = new TH1D("VbbHcc_tags_Aplanarity_stack_9","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(1,26.07453);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(2,2.118147);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(3,0.3806609);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(4,0.1225691);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(5,0.04795816);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(6,0.03575084);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(7,0.01754954);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(8,0.01440649);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(9,0.008865873);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(10,0.002209421);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(11,0.003321317);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(17,0.002217832);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(1,0.1697937);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(2,0.04747577);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(3,0.02007741);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(4,0.01150684);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(5,0.007236353);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(6,0.006292188);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(7,0.004461637);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(8,0.004006739);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(9,0.00314298);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(10,0.001562547);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(11,0.001930852);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(17,0.001568797);
   VbbHcc_tags_Aplanarity_stack_9->SetEntries(28512);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Aplanarity_stack_9->SetFillColor(ci);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetRange(1,50);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_9->Draw("HIST");
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
