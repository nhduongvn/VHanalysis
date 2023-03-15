#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_both_16_logY()
{
//=========Macro generated from canvas: Z_dR_both_16/Z_dR_both_16
//=========  (Thu Mar  9 12:19:51 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_both_16 = new TCanvas("Z_dR_both_16", "Z_dR_both_16",0,0,600,600);
   Z_dR_both_16->SetHighLightColor(2);
   Z_dR_both_16->Range(-1.310117,-0.09010698,7.029799,0.6607845);
   Z_dR_both_16->SetFillColor(0);
   Z_dR_both_16->SetFillStyle(4000);
   Z_dR_both_16->SetBorderMode(0);
   Z_dR_both_16->SetBorderSize(2);
   Z_dR_both_16->SetLogy();
   Z_dR_both_16->SetLeftMargin(0.15709);
   Z_dR_both_16->SetRightMargin(0.1234783);
   Z_dR_both_16->SetBottomMargin(0.12);
   Z_dR_both_16->SetFrameFillStyle(1000);
   Z_dR_both_16->SetFrameBorderMode(0);
   Z_dR_both_16->SetFrameFillStyle(1000);
   Z_dR_both_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1e+10);
   
   TH1F *st_stack_145 = new TH1F("st_stack_145","",30,0,6);
   st_stack_145->SetMinimum(-2.423209e+09);
   st_stack_145->SetMaximum(-0.5860878);
   st_stack_145->SetDirectory(0);
   st_stack_145->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_145->SetLineColor(ci);
   st_stack_145->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_145->GetXaxis()->SetRange(1,30);
   st_stack_145->GetXaxis()->SetLabelFont(42);
   st_stack_145->GetXaxis()->SetTitleOffset(1);
   st_stack_145->GetXaxis()->SetTitleFont(42);
   st_stack_145->GetYaxis()->SetTitle("Event/0.2");
   st_stack_145->GetYaxis()->SetLabelFont(42);
   st_stack_145->GetYaxis()->SetTitleSize(0.037);
   st_stack_145->GetYaxis()->SetTitleFont(42);
   st_stack_145->GetZaxis()->SetLabelFont(42);
   st_stack_145->GetZaxis()->SetTitleOffset(1);
   st_stack_145->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_145);
   
   
   TH1D *VbbHcc_both_Z_dR_stack_1 = new TH1D("VbbHcc_both_Z_dR_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(3,0.224225);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(4,0.381113);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(5,0.3592089);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(6,0.2985454);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(7,0.2548433);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(8,0.1917365);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(9,0.1062104);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(10,0.09564625);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(11,0.0775518);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(12,0.1109342);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(13,0.1140994);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(14,0.1395022);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(15,0.143088);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(16,0.1409235);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(17,0.05724701);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(18,0.02209052);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(19,0.009138046);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(20,0.006223566);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(21,0.005273409);
   VbbHcc_both_Z_dR_stack_1->SetBinError(3,0.02161293);
   VbbHcc_both_Z_dR_stack_1->SetBinError(4,0.02805181);
   VbbHcc_both_Z_dR_stack_1->SetBinError(5,0.02754766);
   VbbHcc_both_Z_dR_stack_1->SetBinError(6,0.02496093);
   VbbHcc_both_Z_dR_stack_1->SetBinError(7,0.02293517);
   VbbHcc_both_Z_dR_stack_1->SetBinError(8,0.0199304);
   VbbHcc_both_Z_dR_stack_1->SetBinError(9,0.01533115);
   VbbHcc_both_Z_dR_stack_1->SetBinError(10,0.01412674);
   VbbHcc_both_Z_dR_stack_1->SetBinError(11,0.0125575);
   VbbHcc_both_Z_dR_stack_1->SetBinError(12,0.01511817);
   VbbHcc_both_Z_dR_stack_1->SetBinError(13,0.0153574);
   VbbHcc_both_Z_dR_stack_1->SetBinError(14,0.01690404);
   VbbHcc_both_Z_dR_stack_1->SetBinError(15,0.01737035);
   VbbHcc_both_Z_dR_stack_1->SetBinError(16,0.01757825);
   VbbHcc_both_Z_dR_stack_1->SetBinError(17,0.01086965);
   VbbHcc_both_Z_dR_stack_1->SetBinError(18,0.006689925);
   VbbHcc_both_Z_dR_stack_1->SetBinError(19,0.004319267);
   VbbHcc_both_Z_dR_stack_1->SetBinError(20,0.00360015);
   VbbHcc_both_Z_dR_stack_1->SetBinError(21,0.003065661);
   VbbHcc_both_Z_dR_stack_1->SetEntries(1377);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_2 = new TH1D("VbbHcc_both_Z_dR_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(2,0.0002632597);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(3,0.084561);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(4,0.1766921);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(5,0.1855646);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(6,0.1531816);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(7,0.09571888);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(8,0.05371598);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(9,0.04238997);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(10,0.03781876);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(11,0.03366471);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(12,0.03646184);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(13,0.04461933);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(14,0.0554633);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(15,0.05474115);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(16,0.05266423);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(17,0.02686023);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(18,0.009345719);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(19,0.007333802);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(20,0.003742782);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(21,0.002195438);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(22,0.001469404);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(23,0.000264103);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(24,0.0003872102);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(25,0.0002591143);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(28,0.0004901777);
   VbbHcc_both_Z_dR_stack_2->SetBinError(2,0.0002632597);
   VbbHcc_both_Z_dR_stack_2->SetBinError(3,0.004751176);
   VbbHcc_both_Z_dR_stack_2->SetBinError(4,0.006867938);
   VbbHcc_both_Z_dR_stack_2->SetBinError(5,0.007065249);
   VbbHcc_both_Z_dR_stack_2->SetBinError(6,0.006425394);
   VbbHcc_both_Z_dR_stack_2->SetBinError(7,0.005072692);
   VbbHcc_both_Z_dR_stack_2->SetBinError(8,0.003790007);
   VbbHcc_both_Z_dR_stack_2->SetBinError(9,0.003375331);
   VbbHcc_both_Z_dR_stack_2->SetBinError(10,0.003162497);
   VbbHcc_both_Z_dR_stack_2->SetBinError(11,0.002978276);
   VbbHcc_both_Z_dR_stack_2->SetBinError(12,0.003127508);
   VbbHcc_both_Z_dR_stack_2->SetBinError(13,0.003464382);
   VbbHcc_both_Z_dR_stack_2->SetBinError(14,0.003855161);
   VbbHcc_both_Z_dR_stack_2->SetBinError(15,0.003841869);
   VbbHcc_both_Z_dR_stack_2->SetBinError(16,0.003766323);
   VbbHcc_both_Z_dR_stack_2->SetBinError(17,0.002673818);
   VbbHcc_both_Z_dR_stack_2->SetBinError(18,0.001543406);
   VbbHcc_both_Z_dR_stack_2->SetBinError(19,0.00138231);
   VbbHcc_both_Z_dR_stack_2->SetBinError(20,0.001001119);
   VbbHcc_both_Z_dR_stack_2->SetBinError(21,0.0007453653);
   VbbHcc_both_Z_dR_stack_2->SetBinError(22,0.0006211401);
   VbbHcc_both_Z_dR_stack_2->SetBinError(23,0.000264103);
   VbbHcc_both_Z_dR_stack_2->SetBinError(24,0.0002928222);
   VbbHcc_both_Z_dR_stack_2->SetBinError(25,0.0002591143);
   VbbHcc_both_Z_dR_stack_2->SetBinError(28,0.0003474312);
   VbbHcc_both_Z_dR_stack_2->SetEntries(4411);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_both_16->Modified();
   Z_dR_both_16->cd();
   Z_dR_both_16->SetSelected(Z_dR_both_16);
}
