#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_jets_all_bckg_17_logY()
{
//=========Macro generated from canvas: CvL_jets_all_bckg_17/CvL_jets_all_bckg_17
//=========  (Wed Mar  1 14:06:43 2023) by ROOT version 6.26/06
   TCanvas *CvL_jets_all_bckg_17 = new TCanvas("CvL_jets_all_bckg_17", "CvL_jets_all_bckg_17",0,0,600,600);
   CvL_jets_all_bckg_17->SetHighLightColor(2);
   CvL_jets_all_bckg_17->Range(-0.2183529,4.960352,1.171633,16.18288);
   CvL_jets_all_bckg_17->SetFillColor(0);
   CvL_jets_all_bckg_17->SetFillStyle(4000);
   CvL_jets_all_bckg_17->SetBorderMode(0);
   CvL_jets_all_bckg_17->SetBorderSize(2);
   CvL_jets_all_bckg_17->SetLogy();
   CvL_jets_all_bckg_17->SetLeftMargin(0.15709);
   CvL_jets_all_bckg_17->SetRightMargin(0.1234783);
   CvL_jets_all_bckg_17->SetBottomMargin(0.12);
   CvL_jets_all_bckg_17->SetFrameFillStyle(1000);
   CvL_jets_all_bckg_17->SetFrameBorderMode(0);
   CvL_jets_all_bckg_17->SetFrameFillStyle(1000);
   CvL_jets_all_bckg_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(9800732);
   st->SetMaximum(4.539066e+14);
   
   TH1F *st_stack_172 = new TH1F("st_stack_172","",20,0,1);
   st_stack_172->SetMinimum(2027939);
   st_stack_172->SetMaximum(1.14981e+15);
   st_stack_172->SetDirectory(0);
   st_stack_172->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_172->SetLineColor(ci);
   st_stack_172->GetXaxis()->SetTitle("CvL tagging score");
   st_stack_172->GetXaxis()->SetRange(1,20);
   st_stack_172->GetXaxis()->SetLabelFont(42);
   st_stack_172->GetXaxis()->SetTitleOffset(1);
   st_stack_172->GetXaxis()->SetTitleFont(42);
   st_stack_172->GetYaxis()->SetTitle("Events/0.05");
   st_stack_172->GetYaxis()->SetLabelFont(42);
   st_stack_172->GetYaxis()->SetTitleSize(0.037);
   st_stack_172->GetYaxis()->SetTitleFont(42);
   st_stack_172->GetZaxis()->SetLabelFont(42);
   st_stack_172->GetZaxis()->SetTitleOffset(1);
   st_stack_172->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_172);
   
   
   TH1D *VbbHcc_jets_all_CvL_stack_1 = new TH1D("VbbHcc_jets_all_CvL_stack_1","",20,0,1);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(1,1.005154e+12);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(2,4.538931e+12);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(3,1.08416e+12);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(4,2.637055e+11);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(5,1.176563e+11);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(6,6.879461e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(7,4.305154e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(8,2.970127e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(9,2.293344e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(10,1.847528e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(11,1.50467e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(12,1.255631e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(13,1.105509e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(14,1.012425e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(15,9.797459e+09);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(16,9.984151e+09);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(17,1.062662e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(18,1.276753e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(19,1.702842e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(20,4.492714e+10);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(1,1.245399e+08);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(2,2.68604e+08);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(3,1.310379e+08);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(4,6.443113e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(5,4.298296e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(6,3.284737e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(7,2.596151e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(8,2.154857e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(9,1.893594e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(10,1.698655e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(11,1.531181e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(12,1.397487e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(13,1.30965e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(14,1.252406e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(15,1.230139e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(16,1.239998e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(17,1.276653e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(18,1.398634e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(19,1.613776e+07);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(20,2.619838e+07);
   VbbHcc_jets_all_CvL_stack_1->SetEntries(1.917007e+09);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_all_CvL_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CvL_stack_1->SetLineColor(ci);
   VbbHcc_jets_all_CvL_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CvL_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvL_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvL_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvL_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvL_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CvL_stack_1,"");
   
   TH1D *VbbHcc_jets_all_CvL_stack_2 = new TH1D("VbbHcc_jets_all_CvL_stack_2","",20,0,1);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(1,4.133635e+07);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(2,1.347558e+08);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(3,3.790762e+07);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(4,1.222757e+07);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(5,6768872);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(6,4696717);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(7,3559579);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(8,2927657);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(9,2638633);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(10,2508824);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(11,2460747);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(12,2472901);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(13,2624187);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(14,2868629);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(15,3272768);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(16,3901970);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(17,4789158);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(18,6357711);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(19,8963890);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(20,2.013455e+07);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(1,1641.856);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(2,2988.422);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(3,1588.139);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(4,905.0695);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(5,671.845);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(6,559.7756);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(7,487.4282);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(8,441.7905);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(9,419.1178);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(10,408.4046);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(11,404.1699);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(12,404.8655);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(13,416.6749);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(14,435.38);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(15,464.7725);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(16,507.2203);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(17,561.5863);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(18,646.7443);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(19,767.894);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(20,1155.436);
   VbbHcc_jets_all_CvL_stack_2->SetEntries(5.284264e+09);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_all_CvL_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CvL_stack_2->SetLineColor(ci);
   VbbHcc_jets_all_CvL_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CvL_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvL_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvL_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvL_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvL_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CvL_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_CvL_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
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
   entry=leg->AddEntry("VbbHcc_jets_all_CvL_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvL_jets_all_bckg_17->Modified();
   CvL_jets_all_bckg_17->cd();
   CvL_jets_all_bckg_17->SetSelected(CvL_jets_all_bckg_17);
}
