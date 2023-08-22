void Z_dR_tags_17_logY()
{
//=========Macro generated from canvas: Z_dR_tags_17/Z_dR_tags_17
//=========  (Tue Aug 22 09:16:04 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_tags_17 = new TCanvas("Z_dR_tags_17", "Z_dR_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_tags_17->SetHighLightColor(2);
   Z_dR_tags_17->Range(-1.2,-1.204113,6.8,1.248489);
   Z_dR_tags_17->SetFillColor(0);
   Z_dR_tags_17->SetBorderMode(0);
   Z_dR_tags_17->SetBorderSize(2);
   Z_dR_tags_17->SetLogy();
   Z_dR_tags_17->SetLeftMargin(0.15);
   Z_dR_tags_17->SetFrameBorderMode(0);
   Z_dR_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_dR_stack_8 = new TH1D("VbbHcc_tags_Z_dR_stack_8","",30,0,6);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(3,2.355426);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(4,3.492247);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(5,5.317162);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(6,1.866051);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(7,1.005431);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(8,0.7731571);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(9,1.304534);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(10,0.9335974);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(11,0.7693111);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(12,0.3636173);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(13,1.409839);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(14,2.239326);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(15,3.547371);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(16,2.714155);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(17,3.070571);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(18,1.696354);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(19,1.947728);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(20,2.032383);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(21,1.028571);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(22,0.4598251);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(23,0.5662893);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(24,0.9779921);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(25,0.3271961);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(27,0.2198757);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(28,0.7352413);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(3,0.7734621);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(4,0.8867439);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(5,1.146631);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(6,0.6705362);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(7,0.5101676);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(8,0.4467556);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(9,0.5880547);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(10,0.4902132);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(11,0.4527871);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(12,0.257121);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(13,0.5868231);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(14,0.7354702);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(15,0.9618895);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(16,0.8328499);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(17,0.8504293);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(18,0.646464);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(19,0.6548548);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(20,0.6836812);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(21,0.5203895);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(22,0.3252653);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(23,0.3284999);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(24,0.4911433);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(25,0.3271961);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(27,0.2198757);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(28,0.4370992);
   VbbHcc_tags_Z_dR_stack_8->SetEntries(178);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Z_dR_stack_8->SetFillColor(ci);
   VbbHcc_tags_Z_dR_stack_8->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VbbHcc_tags_Z_dR_stack_8->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_Z_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_8->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_tags_17->Modified();
   Z_dR_tags_17->cd();
   Z_dR_tags_17->SetSelected(Z_dR_tags_17);
}
