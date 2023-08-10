void Aplanarity_tags_17_logY()
{
//=========Macro generated from canvas: Aplanarity_tags_17/Aplanarity_tags_17
//=========  (Thu Aug 10 10:41:18 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_17 = new TCanvas("Aplanarity_tags_17", "Aplanarity_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_17->SetHighLightColor(2);
   Aplanarity_tags_17->Range(-0.2,-2.107674,1.133333,5.241349);
   Aplanarity_tags_17->SetFillColor(0);
   Aplanarity_tags_17->SetBorderMode(0);
   Aplanarity_tags_17->SetBorderSize(2);
   Aplanarity_tags_17->SetLogy();
   Aplanarity_tags_17->SetLeftMargin(0.15);
   Aplanarity_tags_17->SetFrameBorderMode(0);
   Aplanarity_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity_stack_3 = new TH1D("VbbHcc_tags_Aplanarity_stack_3","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(1,16939.39);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(2,2472.523);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(3,670.6074);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(4,248.7287);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(5,115.3348);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(6,56.11845);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(7,31.48739);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(8,19.22005);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(9,11.74888);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(10,6.75042);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(11,3.939324);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(12,2.506677);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(13,2.39747);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(14,0.9944813);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(15,0.8068184);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(16,0.7767227);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(17,0.1040013);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(18,0.3202566);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(19,0.08867438);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(20,0.08477316);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(1,35.48165);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(2,13.49922);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(3,7.018551);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(4,4.252238);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(5,2.887101);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(6,2.02068);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(7,1.506878);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(8,1.185811);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(9,0.9097772);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(10,0.6847702);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(11,0.536289);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(12,0.4291066);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(13,0.4324469);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(14,0.2747586);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(15,0.2380863);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(16,0.2325068);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(17,0.07492405);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(18,0.1613997);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(19,0.08867438);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(20,0.08477316);
   VbbHcc_tags_Aplanarity_stack_3->SetEntries(306587);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Aplanarity_stack_3->SetFillColor(ci);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetRange(1,50);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_3->Draw("HIST");
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
