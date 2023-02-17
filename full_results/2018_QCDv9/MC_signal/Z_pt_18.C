#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_18()
{
//=========Macro generated from canvas: Z_pt_18/Z_pt_18
//=========  (Thu Feb 16 13:12:21 2023) by ROOT version 6.26/06
   TCanvas *Z_pt_18 = new TCanvas("Z_pt_18", "Z_pt_18",0,0,600,600);
   Z_pt_18->SetHighLightColor(2);
   Z_pt_18->Range(37.97653,-0.3880837,1705.96,2.845947);
   Z_pt_18->SetFillColor(0);
   Z_pt_18->SetFillStyle(4000);
   Z_pt_18->SetBorderMode(0);
   Z_pt_18->SetBorderSize(2);
   Z_pt_18->SetLeftMargin(0.15709);
   Z_pt_18->SetRightMargin(0.1234783);
   Z_pt_18->SetBottomMargin(0.12);
   Z_pt_18->SetFrameFillStyle(1000);
   Z_pt_18->SetFrameBorderMode(0);
   Z_pt_18->SetFrameFillStyle(1000);
   Z_pt_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   
   TH1F *st_stack_65 = new TH1F("st_stack_65","",40,0,2000);
   st_stack_65->SetMinimum(0);
   st_stack_65->SetMaximum(2.522544);
   st_stack_65->SetDirectory(0);
   st_stack_65->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_65->SetLineColor(ci);
   st_stack_65->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_65->GetXaxis()->SetRange(7,30);
   st_stack_65->GetXaxis()->SetLabelFont(42);
   st_stack_65->GetXaxis()->SetTitleOffset(1);
   st_stack_65->GetXaxis()->SetTitleFont(42);
   st_stack_65->GetYaxis()->SetTitle("Events/50.0");
   st_stack_65->GetYaxis()->SetLabelFont(42);
   st_stack_65->GetYaxis()->SetTitleSize(0.037);
   st_stack_65->GetYaxis()->SetTitleFont(42);
   st_stack_65->GetZaxis()->SetLabelFont(42);
   st_stack_65->GetZaxis()->SetTitleOffset(1);
   st_stack_65->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_65);
   
   
   TH1D *VbbHcc_MC_Z_pt_stack_1 = new TH1D("VbbHcc_MC_Z_pt_stack_1","",40,0,2000);
   VbbHcc_MC_Z_pt_stack_1->SetBinContent(1,83.76533);
   VbbHcc_MC_Z_pt_stack_1->SetBinContent(2,99.86295);
   VbbHcc_MC_Z_pt_stack_1->SetBinContent(3,46.62094);
   VbbHcc_MC_Z_pt_stack_1->SetBinContent(4,18.68369);
   VbbHcc_MC_Z_pt_stack_1->SetBinContent(5,7.969069);
   VbbHcc_MC_Z_pt_stack_1->SetBinContent(6,3.731375);
   VbbHcc_MC_Z_pt_stack_1->SetBinContent(7,1.747579);
   VbbHcc_MC_Z_pt_stack_1->SetBinContent(8,0.9680226);
   VbbHcc_MC_Z_pt_stack_1->SetBinContent(9,0.5218388);
   VbbHcc_MC_Z_pt_stack_1->SetBinContent(10,0.2483681);
   VbbHcc_MC_Z_pt_stack_1->SetBinContent(11,0.1685443);
   VbbHcc_MC_Z_pt_stack_1->SetBinContent(12,0.1363521);
   VbbHcc_MC_Z_pt_stack_1->SetBinContent(13,0.06998301);
   VbbHcc_MC_Z_pt_stack_1->SetBinContent(14,0.04480256);
   VbbHcc_MC_Z_pt_stack_1->SetBinContent(15,0.01259873);
   VbbHcc_MC_Z_pt_stack_1->SetBinContent(16,0.01333881);
   VbbHcc_MC_Z_pt_stack_1->SetBinContent(17,0.01290871);
   VbbHcc_MC_Z_pt_stack_1->SetBinContent(18,0.01605913);
   VbbHcc_MC_Z_pt_stack_1->SetBinContent(19,0.00793054);
   VbbHcc_MC_Z_pt_stack_1->SetBinContent(20,0.001884475);
   VbbHcc_MC_Z_pt_stack_1->SetBinContent(23,0.00341728);
   VbbHcc_MC_Z_pt_stack_1->SetBinContent(25,0.002133138);
   VbbHcc_MC_Z_pt_stack_1->SetBinError(1,0.5207074);
   VbbHcc_MC_Z_pt_stack_1->SetBinError(2,0.5644116);
   VbbHcc_MC_Z_pt_stack_1->SetBinError(3,0.3952752);
   VbbHcc_MC_Z_pt_stack_1->SetBinError(4,0.2474995);
   VbbHcc_MC_Z_pt_stack_1->SetBinError(5,0.1590985);
   VbbHcc_MC_Z_pt_stack_1->SetBinError(6,0.1101816);
   VbbHcc_MC_Z_pt_stack_1->SetBinError(7,0.07271097);
   VbbHcc_MC_Z_pt_stack_1->SetBinError(8,0.0551242);
   VbbHcc_MC_Z_pt_stack_1->SetBinError(9,0.03849292);
   VbbHcc_MC_Z_pt_stack_1->SetBinError(10,0.02711222);
   VbbHcc_MC_Z_pt_stack_1->SetBinError(11,0.02156892);
   VbbHcc_MC_Z_pt_stack_1->SetBinError(12,0.0197687);
   VbbHcc_MC_Z_pt_stack_1->SetBinError(13,0.01425315);
   VbbHcc_MC_Z_pt_stack_1->SetBinError(14,0.01150843);
   VbbHcc_MC_Z_pt_stack_1->SetBinError(15,0.00565793);
   VbbHcc_MC_Z_pt_stack_1->SetBinError(16,0.006127668);
   VbbHcc_MC_Z_pt_stack_1->SetBinError(17,0.005347862);
   VbbHcc_MC_Z_pt_stack_1->SetBinError(18,0.008061195);
   VbbHcc_MC_Z_pt_stack_1->SetBinError(19,0.0046092);
   VbbHcc_MC_Z_pt_stack_1->SetBinError(20,0.001884475);
   VbbHcc_MC_Z_pt_stack_1->SetBinError(23,0.002640443);
   VbbHcc_MC_Z_pt_stack_1->SetBinError(25,0.002133138);
   VbbHcc_MC_Z_pt_stack_1->SetEntries(108766);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_MC_Z_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_MC_Z_pt_stack_1->SetLineColor(ci);
   VbbHcc_MC_Z_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_MC_Z_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_MC_Z_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_MC_Z_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_MC_Z_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_MC_Z_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_MC_Z_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_MC_Z_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_MC_Z_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_MC_Z_pt_stack_1,"");
   
   TH1D *VbbHcc_MC_Z_pt_stack_2 = new TH1D("VbbHcc_MC_Z_pt_stack_2","",40,0,2000);
   VbbHcc_MC_Z_pt_stack_2->SetBinContent(1,2.692797);
   VbbHcc_MC_Z_pt_stack_2->SetBinContent(2,8.478021);
   VbbHcc_MC_Z_pt_stack_2->SetBinContent(3,11.99655);
   VbbHcc_MC_Z_pt_stack_2->SetBinContent(4,7.696592);
   VbbHcc_MC_Z_pt_stack_2->SetBinContent(5,3.359715);
   VbbHcc_MC_Z_pt_stack_2->SetBinContent(6,1.455967);
   VbbHcc_MC_Z_pt_stack_2->SetBinContent(7,0.6548444);
   VbbHcc_MC_Z_pt_stack_2->SetBinContent(8,0.2782573);
   VbbHcc_MC_Z_pt_stack_2->SetBinContent(9,0.1290994);
   VbbHcc_MC_Z_pt_stack_2->SetBinContent(10,0.05657569);
   VbbHcc_MC_Z_pt_stack_2->SetBinContent(11,0.03672542);
   VbbHcc_MC_Z_pt_stack_2->SetBinContent(12,0.01743691);
   VbbHcc_MC_Z_pt_stack_2->SetBinContent(13,0.006130181);
   VbbHcc_MC_Z_pt_stack_2->SetBinContent(14,0.003346049);
   VbbHcc_MC_Z_pt_stack_2->SetBinContent(15,0.001400106);
   VbbHcc_MC_Z_pt_stack_2->SetBinContent(16,0.001104977);
   VbbHcc_MC_Z_pt_stack_2->SetBinContent(17,0.0009409064);
   VbbHcc_MC_Z_pt_stack_2->SetBinError(1,0.03265399);
   VbbHcc_MC_Z_pt_stack_2->SetBinError(2,0.05894172);
   VbbHcc_MC_Z_pt_stack_2->SetBinError(3,0.07330938);
   VbbHcc_MC_Z_pt_stack_2->SetBinError(4,0.05537978);
   VbbHcc_MC_Z_pt_stack_2->SetBinError(5,0.03697298);
   VbbHcc_MC_Z_pt_stack_2->SetBinError(6,0.02345619);
   VbbHcc_MC_Z_pt_stack_2->SetBinError(7,0.01579409);
   VbbHcc_MC_Z_pt_stack_2->SetBinError(8,0.009889157);
   VbbHcc_MC_Z_pt_stack_2->SetBinError(9,0.006817276);
   VbbHcc_MC_Z_pt_stack_2->SetBinError(10,0.004368501);
   VbbHcc_MC_Z_pt_stack_2->SetBinError(11,0.003599316);
   VbbHcc_MC_Z_pt_stack_2->SetBinError(12,0.002433524);
   VbbHcc_MC_Z_pt_stack_2->SetBinError(13,0.001462151);
   VbbHcc_MC_Z_pt_stack_2->SetBinError(14,0.001118255);
   VbbHcc_MC_Z_pt_stack_2->SetBinError(15,0.0007073537);
   VbbHcc_MC_Z_pt_stack_2->SetBinError(16,0.0006459935);
   VbbHcc_MC_Z_pt_stack_2->SetBinError(17,0.0005718417);
   VbbHcc_MC_Z_pt_stack_2->SetEntries(108071);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_MC_Z_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_MC_Z_pt_stack_2->SetLineColor(ci);
   VbbHcc_MC_Z_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_MC_Z_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_MC_Z_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_MC_Z_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_MC_Z_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_MC_Z_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_MC_Z_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_MC_Z_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_MC_Z_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_MC_Z_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_MC_Z_pt_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_MC_Z_pt_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_pt_18->Modified();
   Z_pt_18->cd();
   Z_pt_18->SetSelected(Z_pt_18);
}
